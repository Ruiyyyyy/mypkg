# mypkg
[![build_and_test](https://github.com/Ruiyyyyy/mypkg/actions/workflows/test.yml/badge.svg)](https://github.com/Ruiyyyyy/mypkg/actions/workflows/test.yml)

ROS 2 Humble を使用した、簡易的な防犯監視システムを提供するパッケージです。
センサーが検知した異常レベル（数値）に応じて、適切な警告メッセージをトピックとしてパブリッシュします。

## 概要
本パッケージは、各部屋の監視を行うセンサーノードと、データを受信して異常判定を行う受信ノードで構成されています。
0〜100の数値をランダムに生成し、その値（異常レベル）に応じて「Normal（異常なし）」「Warning（注意）」「Alert（警告）」のステータスを判定し、他のノードへ通知します。

## ノードとトピック

### talker
各部屋を監視するセンサーを模したノードです。2秒ごとにランダムな数値を生成し、トピックへ送信します。
- **パブリッシュ先**: `sensor_data` [std_msgs/Int16]
- **内容**: 0〜100の整数（異常レベル）

### listener
センサーからのデータを受信し、レベルに応じた警告ステータスを発信するノードです。
- **サブスクライブ先**: `sensor_data` [std_msgs/Int16]
- **パブリッシュ先**: `alert_status` [std_msgs/String]
- **動作詳細**:
  - レベル 80超: "Alert"
  - レベル 40超: "Warning"
  - それ以外: "Normal"


## 実行方法
```bash
$ colcon build --packages-select mypkg
$ source install/setup.bash
```

## launch
- 機能

　  talkerとlistenerを同時に実行します
　
- 実行方法
```bash
$ ros2 launch mypkg talk_listen.launch.py
```

## 必要なソフトウェア
- Python 3.10.x
- ROS2 Humble Hawksbill
- Ubuntu 22.04 LTS

## ライセンス
- このソフトウェアパッケージは、3条項BSDライセンス（3-Clause BSD License）の下、再頒布および使用が許可されます。
- © 2025 Ryu Taniguchi
