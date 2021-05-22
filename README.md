# Testato_ST7032i_LCD_I2C
ST7032i_LCD_I2C Arduino Library

Library for I2C LCD based on ST7032i controller

For news and comments: https://forum.arduino.cc/t/lib-testato_st7032i_lcd_i2c/94108

Derived from Library Ver 1.0: http://hmario.home.xs4all.nl/arduino/LiquidCrystal_I2C_ST7032i/

### Changelog
2.0.1 (22 May 2021)
- GitHub repo

2.0.0
- Is it possible use the LCD on every pin, and change the speed of the I2C software bus, by the "Testato_SoftI2CMaster" library. "Testato_SoftI2CMaster" library need to be installed also if you want use only the classic hardware I2C (Wire library)
- Added an example for the use of "Software I2C"
- Tested new LCD Midas (thanks to Federico)
- Changed library name to Testato_ST7032i_LCD_I2C

Ver 1.3.1
- Updated Examples and added a new one "MultipleLcd"

1.3.0
- Winstar Lcd support (documentation and example revision)

1.2.0
- 3,3V power supply compatibility

1.1.0
- added setDoubleFont and setSingleFont
