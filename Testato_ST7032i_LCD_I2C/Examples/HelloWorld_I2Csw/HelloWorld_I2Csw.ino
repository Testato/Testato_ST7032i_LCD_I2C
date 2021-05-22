/*
"Hello World" for Testato_ST7032i_LCD_I2C library.
This example use the Testato_SoftI2CMaster library. So it is possible use every pin for I2C
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


// Choose your I2C Speed and Pins
#define SPEED		2
#define SDA_PIN		A4   
#define SCL_PIN		A5
SoftI2CMaster i2csw = SoftI2CMaster(SPEED, SCL_PIN, SDA_PIN);


LiquidCrystal_I2C_ST7032i lcd(2, 0x3E, 8, 2, i2csw);	// 2=SW_I2C - 0x3E=Lcd Address - 8Char x 2Line (no backlight)




void setup(){
	
  lcd.init();           //  Initialize the lcd 
  lcd.clear();          //  Clear the display
  
  lcd.setCursor(0,0);   // Set the cursor to col 0, row 0
  lcd.print("Hello");   // Print the first word
  
  lcd.setCursor(0,1);   // Set the cursor to col 0, row 1
  lcd.print("World!");  // Print the second word
}

void loop()
{
}