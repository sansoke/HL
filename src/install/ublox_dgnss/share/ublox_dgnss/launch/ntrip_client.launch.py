""" Launch ntrip client publishing RTCM messages"""
import launch
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch.substitutions import TextSubstitution, EnvironmentVariable
from launch_ros.actions import ComposableNodeContainer
from launch_ros.descriptions import ComposableNode

def generate_launch_description():
  """Generate launch description for ublox_dgnss components."""

  use_https_arg = DeclareLaunchArgument(
    "use_https", default_value=TextSubstitution(text="false") # <--- https가 아니므로 false 유지
  )
  host_arg = DeclareLaunchArgument(
    "host", default_value=TextSubstitution(text="fkp.ngii.go.kr") # <--- 새로운 서버 주소로 변경
  )
  port_arg = DeclareLaunchArgument(
    "port", default_value=TextSubstitution(text="2201") # <--- 새로운 포트 번호로 변경
  )
  mountpoint_arg = DeclareLaunchArgument(
    "mountpoint", default_value=TextSubstitution(text="VRS-RTCM32") # 멀티GNSS는 보통 RTCM3.2 사용
  )
  username_arg = DeclareLaunchArgument(
    "username", default_value=EnvironmentVariable(name="NTRIP_USERNAME", default_value="woongje725") # <--- 사용자 ID로 변경
  )
  password_arg = DeclareLaunchArgument(
    "password", default_value=EnvironmentVariable(name="NTRIP_PASSWORD", default_value="ngii") # <--- 사용자 비밀번호로 변경
  )
  
  log_level_arg = DeclareLaunchArgument(
    "log_level", default_value=TextSubstitution(text="INFO")
  )
  maxage_conn_arg = DeclareLaunchArgument(
    "maxage_conn", default_value=TextSubstitution(text="30")
  )

  params = [{
    'use_https': LaunchConfiguration('use_https'),
    'host': LaunchConfiguration('host'),
    'port': LaunchConfiguration('port'),
    'mountpoint': LaunchConfiguration('mountpoint'),
    'username': LaunchConfiguration('username'),
    'password': LaunchConfiguration('password'),
    'log_level': LaunchConfiguration('log_level'),
    'maxage_conn': LaunchConfiguration('maxage_conn'),
  }]

  container1 = ComposableNodeContainer(
    name='ntrip_client_container',
    namespace='',
    package='rclcpp_components',
    executable='component_container_mt',
    arguments=['--ros-args', '--log-level', LaunchConfiguration('log_level')],
    composable_node_descriptions=[
      ComposableNode(
        package='ntrip_client_node',
        plugin='ublox_dgnss::NTRIPClientNode',
        name='ntrip_client',
        parameters=params,
      )
    ]
  )

  return launch.LaunchDescription([
    use_https_arg,
    host_arg,
    port_arg,
    mountpoint_arg,
    username_arg,
    password_arg,
    log_level_arg,
    maxage_conn_arg,
    container1
  ])
