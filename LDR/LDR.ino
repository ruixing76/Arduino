/**
 * 光敏电阻
 * 光强大电阻低
 * 将光敏电阻和蜂鸣器串联
 */
int outPin=6;
void setup() { 
  pinMode(outPin,OUTPUT); 
} 
//发声code
void loop() { 
  for(int i=0;i<100;i++) {
    digitalWrite(outPin,HIGH); 
    delay(1); 
    digitalWrite(outPin,LOW); 
    delay(1); 
  }      
}

