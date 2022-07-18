#!/usr/bin/env python
from __future__ import print_function

#import roslib
import sys
import rospy
import cv2 as cv
from matplotlib import pyplot as plt
#import numpy as np


from sensor_msgs.msg import Image
from cv_bridge import CvBridge, CvBridgeError

class hist_reference_generate:

  def __init__(self):
    
    self.bridge = CvBridge()
    self.image_sub = rospy.Subscriber("/hik_camera/image_raw",Image,self.callback)

  def callback(self,data):
    # plt.clf()
    try:
      image = self.bridge.imgmsg_to_cv2(data, "bgr8")
    except CvBridgeError as e:
      print(e)
    plt.hist(image.ravel(), 256, [0, 256]) 
    plt.savefig("1.png")
    # plt.show()
    print("saving...")
    sys.exit(0)


def main(args):
  rospy.init_node('hist_reference_generate', anonymous=True)
  cr = hist_reference_generate()
  # plt.ion()
  try:
    rospy.spin()
  except KeyboardInterrupt:
    print("Shutting down")
  cv.destroyAllWindows()

if __name__ == '__main__':
    main(sys.argv)