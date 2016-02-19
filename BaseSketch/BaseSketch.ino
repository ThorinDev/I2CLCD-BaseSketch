/*
  Chris Nethercott
  LCD Tester
*/

#include <Wire.h>
#include <LiquidCrystal_I2C.h> // Uses the library that is https://github.com/DerbyGrammar/Arduino-LiquidCrystal-I2C-library.

LiquidCrystal_I2C lcd(0x27, 16, 2); // 16,2 LCD. Use a I2C finder to find the address.

void setup() {
  lcd.begin();
  lcd.backlight();
}

void loop() {} //Not doing anything in the loop.
