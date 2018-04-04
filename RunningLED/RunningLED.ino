int startPin=0;
int endPin=2;
int index=startPin;

void setup() {
  // put your setup code here, to run once:
  for(int i=startPin;i<=endPin;i++){
    pinMode(i,OUTPUT);  //设置输出管脚
  }
}

void loop() {
  // 循环点亮的方式是开始的时候全灭，然后点亮一个灯并且延时
  for(int i=startPin;i<=endPin;i++){
    digitalWrite(i,LOW);
  }
  digitalWrite(index,HIGH);
  index=(index+1)%(endPin-startPin+1);  //循环取余数
  delay(300);
}
