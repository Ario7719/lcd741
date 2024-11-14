#include <LiquidCrystal.h>
void setup() {
  lcd.init ();
  lcd.begin(16,2);
  lcd.clear()
  lcd.print("Hello world");


}

void loop() {
  // put your main code here, to run repeatedly:

}
