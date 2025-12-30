# mypkg

このパッケージは、ROS 2 Humble を使用した簡易的な防犯監視システムです。
センサーが検知した異常レベルに応じて、適切な警告を表示します。

##概要
* talker :各部屋の監視を行い、異常レベルを配信します。
* listener :受信した異常レベルに基づき、ユーザーへの警告メッセージを表示します。
## インストール方法
以下のコマンドをターミナルで実行して、ワークスペースにクローンしビルドしてください。

```bash

cd ~/ros2_ws/src
git clone [https://github.com/Ruiyyyyy/mypkg.git](https://github.com/Ruiyyyyy/mypkg.git)
git clone [https://github.com/Ruiyyyyy/person_msgs.git](https://github.com/Ruiyyyyy/person_msgs.git)
cd ~/ros2_ws
colcon build --cmake-args -DPYTHON_EXECUTABLE=/usr/bin/python3.10
source install/setup.bash
```

##実行方法
* 配信側: ros2 run mypkg talker
* 受信側: ros2 run mypkg listener

## 必要な環境
* Linux環境
* Python 3.7+
* ROS2 Humble

## ライセンス
- このソフトウェアパッケージは，3条項BSDライセンスの下，再頒布および使用が許
可されます．
- このパッケージは，Robosys2025由来のコード（© 2025 Ryu Taniguchi）を利用しています．
- このパッケージのコードは，下記のスライド（CC-BY-SA 4.0 by Ryuichi Ueda）の
ものを，本人の許可を得て自身の著作としたものです．
    - [ryuichiueda/my_slides robosys_2025](https://github.com/ryuichiueda/slides_marp/tree/master/prob_robotics_2025)
- © 2025 Ryu Taniguchi
