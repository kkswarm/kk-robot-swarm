#!/usr/bin/env python

import os
import csv
import math
import tf
import rospy
import sys

from geometry_msgs.msg import Quaternion, PoseStamped

from styx_msgs.msg import Lane, Waypoint

from nav_msgs.msg import Path

CSV_HEADER = ['x', 'y', 'yaw']
MAX_DECEL = 1.0


class WaypointLoader(object):

    def __init__(self):
        rospy.init_node('waypoint_loader', log_level=rospy.DEBUG)

        self.pub = rospy.Publisher('/base_waypoints', Lane, queue_size=1, latch=True)
        self.pub_path = rospy.Publisher('/path', Path, queue_size=1, latch=True)
        
        self.velocity = self.kmph2mps(rospy.get_param('~velocity'))
        self.new_waypoint_loader(rospy.get_param('~path'))
        rospy.spin()

    def new_waypoint_loader(self, path):
        if os.path.isfile(path):
            waypoints, base_path = self.load_waypoints(path)
            self.publish(waypoints, base_path)
            rospy.loginfo('Waypoint Loded')
        else:
            rospy.logerr('%s is not a file', path)

    def quaternion_from_yaw(self, yaw):
        return tf.transformations.quaternion_from_euler(0., 0., yaw)

    def kmph2mps(self, velocity_kmph):
        return (velocity_kmph * 1000.) / (60. * 60.)

    def load_waypoints(self, fname):
        waypoints = []
        base_path = Path()
        #base_path.header.frame_id = 'world'
        base_path.header.frame_id = 'map'
        with open(fname) as wfile:
            reader = csv.DictReader(wfile, CSV_HEADER)
            for wp in reader:
                #print(wp)
                p = Waypoint()
                p.pose.pose.position.x = float(wp['x'])
                p.pose.pose.position.y = float(wp['y'])
                q = self.quaternion_from_yaw(float(wp['yaw']))
                p.pose.pose.orientation = Quaternion(*q)
                p.twist.twist.linear.x = float(self.velocity)
                p.forward = True
                waypoints.append(p)

                path_element = PoseStamped()
                path_element.pose.position.x = p.pose.pose.position.x
                path_element.pose.position.y = p.pose.pose.position.y
                base_path.poses.append(path_element)

                
        waypoints = self.decelerate(waypoints)
        return waypoints,base_path

    def distance(self, p1, p2):
        x, y, z = p1.x - p2.x, p1.y - p2.y, p1.z - p2.z
        return math.sqrt(x*x + y*y + z*z)

    def decelerate(self, waypoints):
        last = waypoints[-1]
        last.twist.twist.linear.x = 0.
        for wp in waypoints[:-1][::-1]:
        	print(wp)
        	dist = self.distance(wp.pose.pose.position, last.pose.pose.position)
        	vel = math.sqrt(2 * MAX_DECEL * dist)
        	print(vel)
        	if vel < 1.0:
        		vel = 0.0
			wp.twist.twist.linear.x = min(vel, wp.twist.twist.linear.x)
		return waypoints

    def publish(self, waypoints, base_path):
        lane = Lane()
        lane.header.frame_id = 'map'
        lane.header.stamp = rospy.Time(0)
        lane.waypoints = waypoints
        self.pub.publish(lane)
        self.pub_path.publish(base_path)

	rospy.loginfo('publishing......\n')


if __name__ == '__main__':
    try:
        WaypointLoader()
        print("waypoint loader closed.")
    except rospy.ROSInterruptException:
        rospy.logerr('Could not start waypoint node.')