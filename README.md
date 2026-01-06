# mypkg
[![test](https://github.com/Ruiyyyyy/mypkg/actions/workflows/build_and_test.yml/badge.svg)](https://github.com/Ruiyyyyy/mypkg/actions/workflows/build_and_test.yml)

ROS 2 Humble を使用した、簡易的な防犯監視システムを提供するパッケージです。
センサーが検知した異常レベル（数値）に応じて、適切な警告メッセージをパブリッシュします。

## 概要
本パッケージは、各部屋の監視を行うセンサーノードと、異常レベルに応じて警告を表示する受信ノードで構成されています。
0〜100の数値をランダムに生成し、その値（異常レベル）に応じて「異常なし」「注意」「警告！」のステータスを判定してログに出力します。

## ノードとトピック
### talker
各部屋を監視するセンサーを模したノードです。2秒ごとにランダムな数値を生成し、トピックへ送信します。
- パブリッシュ先: `sensor_data` [std_msgs/Int16]
  - 内容: 0〜100の整数（異常レベル）

### listener)センサーからのデータを受信し、レベルに応じた警告を行うノードです。
- サブスクライブ先: `sensor_data` [std_msgs/Int16]
- 動作:
  - レベル 80超: 「警告！」
  - レベル 40超: 「注意」
  - それ以外: 「異常なし」

## 実行方法
### ビルド
ワークスペースのルートディレクトリで以下のコマンドを実行します。
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

