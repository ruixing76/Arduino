// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // set up the LCD's number of columns and rows: 
  lcd.begin(16, 2);
}

void loop() {
  lcd.setCursor(0,0);
  lcd.print("hello, world!");
  delay(1000);
  lcd.clear();
  delay(1000);
}
