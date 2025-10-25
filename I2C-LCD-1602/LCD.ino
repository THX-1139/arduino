#include "Wire.h"
#include "LiquidCrystal_I2C.h"

LiquidCrystal_I2C LCD(0x27,16,2);

void setup() {
    LCD.init();
    LCD.backlight();

    LED.setCursor(1,0);
    LCD.print("WORD");

    LCD.setCursor(8,1);
    LCD.print("WORD");
}

void loop (){
    LCD.noDisplay();
    delay(1000);
    LCD.noDisplay();
    delay();
}