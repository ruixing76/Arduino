/**
 * 使用Buzzer演奏小星星
 * 1=C
 */
#include "music_note.c" //音符表

int buzzer=3; //蜂鸣器口，PWM
int scale[]={C,C,G,G,A,A,G,O,
             F,F,E,E,D,D,C,O,
             G,G,F,F,E,E,D,O,
             G,G,F,F,E,E,D,O, 
             C,C,G,G,A,A,G,O,
             F,F,E,E,D,D,C,O,};  //旋律
float duration[]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
                  1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
                  1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
                  1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,}; //音符时值 
int len=0;  //该变量后面用于统计音符个数               
void setup() {
  pinMode(buzzer,OUTPUT);
  len=sizeof(scale)/sizeof(scale[0]);
}

void loop() {
  for(int i=0;i<len;i++){
    tone(buzzer,scale[i]);
    delay(300*duration[i]);
    noTone(buzzer);
    delay(100);
  }
  delay(500);
}
