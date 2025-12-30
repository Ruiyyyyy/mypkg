import rclpy
from rclpy.node import Node
from person_msgs.msg import Person
import random

class SensorTalker(Node):

    
    def __init__(self):
        super().__init__('sensor_talker')
        self.pub = self.create_publisher(Person, 'sensor_data', 10)
        self.timer = self.create_timer(2.0, self.timer_callback)


def timer_callback(self):
        msg = Person()
        locations = ["玄関", "リビング", "ベランダ", "窓"]
        msg.name = random.choice(locations)  # 検知場所
        msg.age = random.randint(0, 100)      # 異常の警戒レベル
        
        self.pub.publish(msg)
        self.get_logger().info(f'監視中: {msg.name} でレベル {msg.age} の動きを検知')


def main():
    rclpy.init()
    node = SensorTalker()
    rclpy.spin(node)
    rclpy.shutdown()
