/*
 * 按键开关控制LED亮和灭
 * 控制方法分为串联和间接控制
 * 间接控制使用范围广泛
 */
int inPin=4;  
int outPin=7;
int val;
void setup()
{
  pinMode(inPin,INPUT); 
  pinMode(outPin,OUTPUT);
  digitalWrite(outPin,LOW);
}
void loop()
{
  val=digitalRead(inPin);
  if(val==HIGH){
    digitalWrite(outPin,HIGH);
  }
  else{
    digitalWrite(outPin,LOW);
  }
}
<<<<<<< HEAD

=======

>>>>>>> c24744c5db9df29ecd31326cc2f7e97bc376e5e1
