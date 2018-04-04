/*
 * 第一个Arduino代码块，控制外接的LED灯闪烁
 */
int ledPin=13;
void setup(){
  pinMode(ledPin,OUTPUT);
}

void loop(){
  digitalWrite(ledPin,HIGH);
  delay(1000);
  digitalWrite(ledPin,LOW);
  delay(1000);
}
<<<<<<< HEAD

=======

>>>>>>> c24744c5db9df29ecd31326cc2f7e97bc376e5e1
