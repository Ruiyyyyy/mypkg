#!/usr/bin/python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import Int16

class AlertListener(Node):
    def __init__(self):
        super().__init__('alert_listener')
        self.sub = self.create_subscription(Int16, 'sensor_data', self.cb, 10)

    def cb(self, msg):
        status = 'Normal'
        if msg.data > 80:
            status = 'Alert'
        elif msg.data > 40:
            status = 'Warning'
        
        # 日本語をやめて英語にします
        self.get_logger().info(f'Listen: {status} ({msg.data})')

def main():
    rclpy.init()
    node = AlertListener()
    rclpy.spin(node)
    rclpy.shutdown()
