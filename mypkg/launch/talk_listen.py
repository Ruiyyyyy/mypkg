import launch
import launch.actions
 import launch.substitutions
 import launch_ros.actions
 
 
 def generate_launch_description():
      talker = launch_ros.actions.Node(
          package='mypkg',      #パッケージの名前を指定
        executable='talker',  #実行するファイル)
 13     listener = launch_ros.actions.Node(
 14         package='mypkg',
 15         executable='listener',
 16         output='screen'        #ログを端末に出すための設定                                   
 17         )
 18
 19     return launch.LaunchDescription([talker, listener])         
