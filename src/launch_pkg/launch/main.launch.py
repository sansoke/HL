from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
import os
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    # --- Waypoint Follower Configuration ---
    decision_making_pkg_dir = get_package_share_directory('decision_making_pkg')
    default_waypoints_path = os.path.join(decision_making_pkg_dir, 'waypoint.csv')

    waypoints_file_arg = DeclareLaunchArgument(
        'waypoints_file',
        default_value=default_waypoints_path,
        description='Full path to the waypoints CSV file.'
    )

    waypoints_file_config = LaunchConfiguration('waypoints_file')

    # --- Launch Description ---
    return LaunchDescription([
        waypoints_file_arg,

        # --- Nodes from the original main launch file ---
        # Node(
        #     package='camera_perception_pkg',
        #     executable='image_publisher_node',
        #     name='image_publisher_node',
        #     output='screen'
        # ),
        # Node(
        #     package='camera_perception_pkg',
        #     executable='yolov8_node',
        #     name='yolov8_node',
        #     output='screen'
        # ),
        # Node(
        #     package='camera_perception_pkg',
        #     executable='yolov8_traffic_light_node',
        #     name='yolov8_traffic_light_node',
        #     output='screen'
        # ),
        # Node(
        #     package='camera_perception_pkg',
        #     executable='lane_info_extractor_node',
        #     name='lane_info_extractor_node',
        #     output='screen'
        # ),
        # Node(
        #     package='debug_pkg',
        #     executable='yolov8_visualizer_node',
        #     name='yolov8_visualizer_node',
        #     output='screen'
        # ),        
        # Node(
        #     package='camera_perception_pkg',
        #     executable='traffic_light_detector_node',
        #     name='traffic_light_detector_node',
        #     output='screen'
        # ),
        # --- This is now the primary motion control node ---

        Node(
            package='decision_making_pkg',
            executable='waypoint_follower_node',
            name='waypoint_follower_node',
            output='screen',
            parameters=[{
                'waypoints_file': waypoints_file_config
            }]
        ),        

        
        # =========================================================================
        # === DISABLED NODES: These are commented out to allow waypoint follower ===
        # === to take control.                                                  ===
        # =========================================================================
        # Node(
        #     package='decision_making_pkg',
        #     executable='motion_planner_node',
        #     name='motion_planner_node',
        #     output='screen'
        # ),
        # Node(
        #     package='decision_making_pkg',
        #     executable='path_planner_node',
        #     name='path_planner_node',
        #     output='screen'
        # ),
        # =========================================================================

        # Node(
        #     package='debug_pkg',
        #     executable='path_visualizer_node',
        #     name='path_visualizer_node',
        #     output='screen'
        # ),
        # Node(
        #     package='debug_pkg',
        #     executable='steering_visualizer_node',
        #     name='steering_visualizer_node',
        #     output='screen'
        # ),
        # Node(
        #     package='debug_pkg',
        #     executable='traffic_light_visualizer_node',
        #     name='traffic_light_visualizer_node',
        #     output='screen'
        # ),
        Node(
            package='serial_communication_pkg',
            executable='serial_sender_node',
            name='serial_sender_node',
            output='screen'
        ),


    ])