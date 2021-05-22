/*
"Hello World" for Testato_ST7032i_LCD_I2C library.
This example use the hardware I2c of the micro.
This example doesn't use backlight control. Connect the backlight via an appropriate series resistor to a constant power source.
*/

#if defined(__AVR_ATtiny85__) || (__AVR_ATtiny2313__)  // This has not been tested
#include "TinyWireM.h"
#else
#include <Wire.h>
#endif


#include "Testato_ST7032i_LCD_I2C.h"
// need the Sw_I2c library also if not used
#include "Testato_SoftI2CMaster.h"

LiquidCrystal_I2C_ST7032i lcd(1, 0x3E, 8, 2);  // 1=HW_I2C - 0x3E=Lcd Address - 8Char x 2Line (no backlight)



void setup(){

  lcd.init();           // Initialize the lcd 
  lcd.clear();          // Clear the display

  lcd.setCursor(0,0);   // Set the cursor to col 0, row 0
  lcd.print("Hello");   // Print the first word
  
  lcd.setCursor(0,1);   // Set the cursor to col 0, row 1
  lcd.print("World!");  // Print the second word
}

void loop()
{
}
