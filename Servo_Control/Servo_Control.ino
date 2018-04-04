/**
 * 红外控制舵机转动
 * 有红外解码小BUG
 */
#include <Servo.h>
#include <IRremote.h>
int servoPin = 9; //舵机控制引脚
int controlPin = 11; //红外控制引脚
int STATUS = 0;
IRrecv irrecv(controlPin);
decode_results results; //接收到的编码结果
Servo servo;  //舵机对象
void setup() {
  Serial.begin(9600);
  irrecv.enableIRIn();
  irrecv.blink13(true);
  servo.attach(servoPin);   //绑定舵机
}

void loop() {
  int LAST_STATUS=STATUS;
  if (irrecv.decode(&results)) {
    Serial.println(results.value,HEX);
    if(results.value==0xFF42BD){ 
      STATUS = !STATUS;
    }
    irrecv.resume();  //接收下一个值
  }
  int ans=LAST_STATUS-STATUS;
  //Serial.println(ans);
  if (ans>0) {
    for (int pos = 0; pos < 180; pos++){ //正传
      servo.write(pos);//设置舵机旋转的角度
      delay(10);
    }
  }
  else if(ans<0){
    for (int pos = 180; pos > 0; pos--){ //反转
      servo.write(pos);//设置舵机旋转的角度
      delay(10);
    }
  }
}
