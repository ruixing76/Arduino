int outPin=7;
int inPin=5;
int val=0;
void setup() {
  Serial.begin(9600);
  pinMode(outPin,OUTPUT); 
}

void loop() {
  val=analogRead(inPin);
  Serial.println(val);
  if(val>12){
    digitalWrite(outPin,HIGH);
  }
  else{
    digitalWrite(outPin,LOW);
  }
}
