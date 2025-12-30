cat << 'EOF' > ~/ros2_ws/src/mypkg/mypkg/talker.py
import random

import rclpy
from person_msgs.msg import Person
from rclpy.node import Node


class SensorTalker(Node):

    def __init__(self):
        super().__init__('sensor_talker')
        self.pub = self.create_publisher(Person, 'sensor_data', 10)
        self.timer = self.create_timer(2.0, self.timer_callback)

    def timer_callback(self):
        msg = Person()
        locations = ['玄関', 'リビング', 'ベランダ', '窓']
        msg.name = random.choice(locations)
        msg.age = random.randint(0, 100)

        self.pub.publish(msg)
        self.get_logger().info(f'監視中: {msg.name} でレベル {msg.age} を検知')


def main():
    rclpy.init()
    node = SensorTalker()
    rclpy.spin(node)
    rclpy.shutdown()
EOF
