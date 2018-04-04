/**
 * 电位器
 * 
 */
int potBuffer=5;
int val=0;
void setup() {
  Serial.begin(9600);
}

void loop() {
  val=analogRead(potBuffer);
  Serial.print("Pot= ");
  Serial.println(val);
}
