#!/usr/bin/Python3
# SPDX-FileCopyrightText: 2025 Ryu Taniguchi
# SPDX-License-Identifier: BSD-3-Clause

import rclpy
from rclpy.node import Node
from std_msgs.msg import Int16
from std_msgs.msg import Int16, String

class AlertListener(Node):
    def __init__(self):
        super().__init__('alert_listener')
        self.sub = self.create_subscription(Int16, 'sensor_data', self.cb, 10)
        self.pub = self.create_publisher(String, 'alert_status', 10)

    def cb(self, msg):
        status = 'Normal'
        if msg.data > 80:
            status = 'Alert'
        elif msg.data > 40:
            status = 'Warning'
        
        self.get_logger().info(f'Listen: {status} ({msg.data})')

        alert_msg = String()
        alert_msg.data = status
        self.pub.publish(alert_msg)

def main():
    rclpy.init()
    node = AlertListener()
    rclpy.spin(node)
    rclpy.shutdown()
