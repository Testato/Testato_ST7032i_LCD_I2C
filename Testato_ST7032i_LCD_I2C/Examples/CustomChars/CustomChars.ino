/*
Custom Characters example for LiquidCrystal_I2C_ST7032i library.

This example doesn't use backlight control. Connect the backlight via an appropriate series resistor to a constant power source.
*/

#if defined(__AVR_ATtiny85__) || (__AVR_ATtiny2313__)  // This has not been tested
  #include "TinyWireM.h"
#else 
  #include <Wire.h>
#endif

#include <LiquidCrystal_I2C_ST7032i.h>

uint8_t bell[8]  = {0x4,0xe,0xe,0xe,0x1f,0x0,0x4};  //  Arrays with user generated symbols
uint8_t note[8]  = {0x2,0x3,0x2,0xe,0x1e,0xc,0x0};
uint8_t clock[8] = {0x0,0xe,0x15,0x17,0x11,0xe,0x0};
uint8_t heart[8] = {0x0,0xa,0x1f,0x1f,0xe,0x4,0x0};
uint8_t duck[8]  = {0x0,0xc,0x1d,0xf,0xf,0x6,0x0};
uint8_t check[8] = {0x0,0x1,0x3,0x16,0x1c,0x8,0x0};
uint8_t cross[8] = {0x0,0x1b,0xe,0x4,0xe,0x1b,0x0};
uint8_t retarrow[8] = {	0x1,0x1,0x5,0x9,0x1f,0x8,0x4};
  
LiquidCrystal_I2C_ST7032i lcd(0x3E,8,2);  //  Set the LCD address to 0x3E for a 8 chars and 2 line display (no backlight control).

void setup()
{
  lcd.init();                   //  Initialize the lcd 
  
  lcd.createChar(0, bell);      //  Create the characters
  lcd.createChar(1, note);
  lcd.createChar(2, clock);
  lcd.createChar(3, heart);
  lcd.createChar(4, duck);
  lcd.createChar(5, check);
  lcd.createChar(6, cross);
  lcd.createChar(7, retarrow);

  lcd.clear();                  //  Clear the display
  lcd.setCursor(0,0);           //  Show the characters on the display
  for(uint8_t cr = 0; cr < 8; cr++){
    lcd.write(cr);
  }
}

void loop()
{
}