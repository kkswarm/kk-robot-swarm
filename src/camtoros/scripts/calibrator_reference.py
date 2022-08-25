#!/usr/bin/env python
from __future__ import print_function

import roslib
import sys
import rospy
import cv2 as cv
import matplotlib.pyplot as plt
#import numpy as np


from sensor_msgs.msg import Image
from cv_bridge import CvBridge, CvBridgeError

class calibrator_reference:

  def __init__(self):
    self.image_pub = rospy.Publisher("/reference_rectangle/image_raw",Image, queue_size=1)
    
    self.bridge = CvBridge()
    self.image_sub = rospy.Subscriber("/hik_camera/image_raw",Image,self.callback)

  def callback(self,data):
    try:
      image = self.bridge.imgmsg_to_cv2(data, "bgr8")
    except CvBridgeError as e:
      print(e)

    size = image.shape
    # draw reference rectangle
    first_point = (210, 150)
    last_point = (1010, 950)

    cv.rectangle(image, first_point, last_point, (0, 255, 0), 2)
    # cv.imshow("output", image)
    # cv.waitKey(1)

    try:
      self.image_pub.publish(self.bridge.cv2_to_imgmsg(image, "bgr8"))
    except CvBridgeError as e:
      print(e)


def main(args):
  rospy.init_node('calibrator_reference', anonymous=True)
  cr = calibrator_reference()

  plt.ion()
  print('calibrator reference running...')
  try:
    rospy.spin()
  except KeyboardInterrupt:
    print("Shutting down")
  cv.destroyAllWindows()

if __name__ == '__main__':
    main(sys.argv)