import rclpy
from rclpy.node import Node
from person_msgs.msg import Person


class AlertListener(Node):
    def __init__(self):
        super().__init__('alert_listener')
        self.sub = self.create_subscription(Person, 'sensor_data', self.cb, 10)

    def cb(self, msg):
        status = "異常なし"
        if msg.age > 80:
            status = "🚨 警告！すぐに確認してください！"
        elif msg.age > 40:
            status = "⚠️ 注意：少し様子を見てください"           
        self.get_logger().info(f'通知: [{msg.name}] 状態: {status} (レベル:{msg.age})')


def main():
    rclpy.init()
    node = AlertListener()
    rclpy.spin(node)
    rclpy.shutdown()
