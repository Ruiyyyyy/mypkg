import rclpy
from rclpy.node import Node
from person_msgs.msg import Person
import random

class WeatherTalker(Node):
    def __init__(self):
        super().__init__('weather_talker')
        self.pub = self.create_publisher(Person, 'weather_info', 10)
        self.timer = self.create_timer(2.0, self.timer_callback)

    def timer_callback(self):
        msg = Person()
        weathers = ["晴れ", "曇り", "雨", "雪"]
        msg.name = random.choice(weathers) # ランダムに天気を決定
        msg.age = random.randint(0, 100)    # 降水確率を0〜100で決定
        
        self.pub.publish(msg)
        self.get_logger().info(f'配信中: 今日の天気は【{msg.name}】 降水確率は【{msg.age}%】です')

def main():
    rclpy.init()
    node = WeatherTalker()
    rclpy.spin(node)
    rclpy.shutdown()
