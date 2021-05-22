/*
Multiple Lcd example for LiquidCrystal_I2C_ST7032i library.
  
This example doesn't use backlight control. Connect the backlight via an appropriate series resistor to a constant power source.
*/

#if defined(__AVR_ATtiny85__) || (__AVR_ATtiny2313__)  // This has not been tested
  #include "TinyWireM.h"
#else 
  #include <Wire.h>
#endif

#include <LiquidCrystal_I2C_ST7032i.h>


// First LCD - Address 0x3E, 16 chars, 2 line display
LiquidCrystal_I2C_ST7032i lcd1(0x3E,8,2);
// Second LCD - Address 0x20, 16 chars, 2 line display
LiquidCrystal_I2C_ST7032i lcd2(0x20,8,2);


void setup()
{
  lcd1.init();      // initialize the first lcd 
  lcd2.init();      // initialize the second lcd 
  
  // Print a message on the first LCD.
  lcd1.print("Hello #1"); 
  
  // Print a message on the first LCD.
  lcd2.print("Hello #2"); 
}

void loop()
{
}
