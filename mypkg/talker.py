import random
import rclpy
from rclpy.node import Node
from std_msgs.msg import Int16

class SensorTalker(Node):
    def __init__(self):
        super().__init__('sensor_talker')
        self.pub = self.create_publisher(Int16, 'sensor_data', 10)
        self.timer = self.create_timer(2.0, self.timer_callback)

    def timer_callback(self):
        msg = Int16()
        msg.data = random.randint(0, 100)
        self.pub.publish(msg)
        self.get_logger().info(f'監視中: レベル {msg.data} を検知')

def main():
    rclpy.init()
    node = SensorTalker()
    rclpy.spin(node)
    rclpy.shutdown()
