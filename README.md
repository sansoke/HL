Trained yolov8 weights
 - best_new.pt : updated weight for lane segmentation and detection
 - best_trafic_light.pt : wegihts for traffic light and signal detection (green, yellow,  red, left, speed signal)

After modifying files
 - colcon build
 - source install/setup.bash

Launch main file
 - ros2 launch launch_pkg main_original.py
 

