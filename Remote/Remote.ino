/**
 * 红外发射与接收的DEMO
 * 
 */
#include <IRremote.h>      // 调用IRRemote库
int RECV_PIN = 11;
//int SEND_PIN= 3;
IRrecv irrecv(RECV_PIN);      //定义接收器的输入管脚
//IRsend irsend;                //定义发射管脚
decode_results results;      //定义保存解码的变量results
void setup()
{
  Serial.begin(9600);
  //irsend.enableIROut(3);
  irrecv.enableIRIn();       //使能红外接收
  irrecv.blink13(true);
}
void loop() {
  //irsend.sendSony(0xa90, 12); // 发射NEC协议红外编码
  //Serial.println("Sending");
  //delay(1000);
  if (irrecv.decode(&results)) {         //解码成功，把数据放入results变量中
    Serial.println(results.value, HEX);  //以16进制格式显示红外编码
    Serial.println(results.decode_type); //显示
    irrecv.resume();                     //接收下一个值
  }
 /* else{
    Serial.println("No signal");
    delay(400);
  }*/

}
