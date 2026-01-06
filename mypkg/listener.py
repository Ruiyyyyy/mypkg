import rclpy
from rclpy.node import Node
from std_msgs.msg import Int16

class AlertListener(Node):
    def __init__(self):
        super().__init__('alert_listener')
        self.sub = self.create_subscription(Int16, 'sensor_data', self.cb, 10)

    def cb(self, msg):
        status = '異常なし'
        if msg.data > 80:
            status = '警告！'
        elif msg.data > 40:
            status = '注意'

        self.get_logger().info(f'通知: 状態: {status} ({msg.data})')

def main():
    rclpy.init()
    node = AlertListener()
    rclpy.spin(node)
    rclpy.shutdown()
