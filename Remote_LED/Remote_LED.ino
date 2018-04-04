/**
 * 红外控制灯的亮灭
 */
#include<IRremote.h>
int RECV_PIN=11;
int OUTPIN=3;
int STATUS=0;
IRrecv irrecv(RECV_PIN);
decode_results results;
void setup() {
  pinMode(OUTPIN,OUTPUT);
  digitalWrite(OUTPIN,LOW);
  irrecv.enableIRIn();
  irrecv.blink13(true);
}

void loop() {
  if(irrecv.decode(&results)){
    if(results.value==0xFDB04F){  //这个是同洲遥控器的电源按键的编码
      STATUS=!STATUS;
    }
    /*else if(results.value==0xFFA857){
      STATUS=0;
    }*/
    irrecv.resume();
  }
  if(STATUS==1){
    digitalWrite(OUTPIN,HIGH);
  }
  else{
    digitalWrite(OUTPIN,LOW);
  }
}
