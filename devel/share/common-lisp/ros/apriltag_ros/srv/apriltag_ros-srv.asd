
(cl:in-package :asdf)

(defsystem "apriltag_ros-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :apriltag_ros-msg
               :sensor_msgs-msg
)
  :components ((:file "_package")
    (:file "AnalyzeSingleImage" :depends-on ("_package_AnalyzeSingleImage"))
    (:file "_package_AnalyzeSingleImage" :depends-on ("_package"))
  ))