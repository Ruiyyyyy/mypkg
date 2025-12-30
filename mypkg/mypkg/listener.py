import rclpy
from rclpy.node import Node
from person_msgs.msg import Person
 
rclpy.init()
node = Node("listener")
 
def main():
     client = node.create_client(Query, 'query') #サービスのクライアントの作成
     while not client.wait_for_service(timeout_sec=1.0): #サービスの待ち待ち2         node.get_logger().info('待機中')

     req = Query.Request()
     req.name = "上田隆一"
     future = client.call_async(req) #非同期でサービスを呼び出し
     while rclpy.ok():
         rclpy.spin_once(node) #一回だけサービスを呼び出したら終わり
         if future.done():     #終わっていたら
             try:
                 response = future.result() #結果を受取り
             except:
                 node.get_logger().info('呼び出し失敗')
            else: #このelseは「exceptじゃなかったら」という意味のelse
                node.get_logger().info("age: {}".format(response.age))

    break #whileを出る
node.destroy_node() #ノードの後始末   （後始末は無限ループでないので書きました
rclpy.shutdown()    #通信の後始       ただ、本来は無限ループでも書いたほうがよいです。
