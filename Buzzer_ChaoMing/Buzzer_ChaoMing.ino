/**
 * 使用Buzzer演奏潮鸣
 * 1=C
 */
#include "music_note.c" //音符表

int buzzer=3; //蜂鸣器口，PWM
int scale[]={G,A,EE,A,G,A,G,A,EE,A,G,
             A,EE,A,G,A,E,
             G,D,E,G,A,B,
             A,EE,A,G,A,G,
             A,EE,B,CC,B,CC,B,A,E,
             D,E,G,A,B,A,EE,A,G,A,
             G,A,EE,A,G,A,EE,A,G,A,
             E,G,D,E,G,A,B,A,EE,A,G,A,
             G,A,EE,B,CC,B,CC,DD,EE,AA};  //旋律
float duration[]={2,1,1,1,1,7,1,1,1,1,1,
                  1,1,1,1,3,1,
                  3,1,1,1,1,1,
                  1,1,1,1,7,1,
                  1,1,1,1,1,1,1,1,6,
                  1,1,1,1,1,1,1,1,1,7,
                  1,1,1,1,1,1,1,1,1,3,
                  1,3,1,1,1,1,1,1,1,1,1,7,
                  1,1,1,1,1,1,1,1,1,4}; //音符时值 
int len=0;  //该变量后面用于统计音符个数               
void setup() {
  pinMode(buzzer,OUTPUT);
  len=sizeof(scale)/sizeof(scale[0]);
}

void loop() {
  for(int i=0;i<len;i++){ 
    tone(buzzer,scale[i]);
    delay(250*duration[i]);
    noTone(buzzer);
    delay(100);
  }
  delay(1000);
<<<<<<< HEAD
}
=======
}
>>>>>>> c24744c5db9df29ecd31326cc2f7e97bc376e5e1
