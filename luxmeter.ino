VCC -> 5V 
GND -> GND 
SCL -> SCL 
SDA -> SDA 
ADD -> GND 
*/ 
#include <Wire.h> 
#include <BH1750.h>0 
#include <LiquidCrystal_I2C.h> 
//I2C pins declaration 
LiquidCrystal_I2C lcd(0x27, 20, 4); 
BH1750 lightMeter; 
void setup(){ 
lcd.init(); // initialize the lcd 
lcd.backlight(); 
Serial.begin(9600); 
18 | P a g e
Serial.begin(115200); 
// Initialize the I2C bus 
Wire.begin(); 
lightMeter.begin(); 
Serial.println(F("BH1750 Test begin")); 
/*lcd.print;*/ 
} 
void loop() { 
float lux = lightMeter.readLightLevel(); 
Serial.print("Light: "); 
lcd.setCursor(2,0); 
lcd.print("Light: "); 
Serial.print(lux); 
lcd.setCursor(2,1); 
lcd.print(lux); 
Serial.println(" lx66"); 
lcd.setCursor(8,1); 
lcd.print(" lx"); 
