 1 import launch
  2 import launch.actions
  3 import launch.substitutions
  4 import launch_ros.actions
  5
  6
  7 def generate_launch_description():
  8
  9     talker = launch_ros.actions.Node(
 10         package='mypkg',      #パッケージの名前を指定
 11         executable='talker',  #実行するファイルの指定
 12         )
 13     listener = launch_ros.actions.Node(
 14         package='mypkg',
 15         executable='listener',
 16         output='screen'        #ログを端末に出すための設定                                   
 17         )
 18
 19     return launch.LaunchDescription([talker, listener])         
