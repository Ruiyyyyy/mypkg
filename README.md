# mypkg

このパッケージは、ROS 2 Humble を使用した簡易的な防犯監視システムです。
センサーが検知した異常レベルに応じて、適切な警告を表示します。

## 概要
- talker :各部屋の監視を行い、異常レベルを配信します。
- listener :受信した異常レベルに基づき、ユーザーへの警告メッセージを表示します。

## 実行方法
- 配信側: ros2 run mypkg talkeri
- 受信側: ros2 run mypkg listener

## 必要な環境
- Linux環境
- Python 3.10.x
- ROS2 Humble

## ライセンス
- このソフトウェアパッケージは，3条項BSDライセンスの下，再頒布および使用が許
可されます．
- © 2025 Ryu Taniguchi
