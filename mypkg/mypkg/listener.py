import rclpy
from rclpy.node import Node
from person_msgs.msg import Person

class WeatherListener(Node):
    def __init__(self):
        super().__init__('weather_listener')
        self.sub = self.create_subscription(Person, 'weather_info', self.cb, 10)

    def cb(self, msg):
        advice = "手ぶらで大丈夫です！"
        if "雨" in msg.name or msg.age >= 50:
            advice = "傘を持っていきましょう！"
        elif "雪" in msg.name:
            advice = "滑らない靴を履きましょう！"
            
        self.get_logger().info(f'予報を受信: {msg.name}({msg.age}%) -> アドバイス: {advice}')

def main():
    rclpy.init()
    node = WeatherListener()
    rclpy.spin(node)
    rclpy.shutdown()
