#include "Wire.h"
#include "LiquidCrystal_I2C.h"

LiquidCrystal_I2C LCD(0x27,16,2);

void setup() {
    LCD.init();
    LCD.backlight();
}

void loop (){
    LCD.Display(); // Включає РК-дисплей
    LED.setCursor(1,0); // Встановлення курсору. Перша цифра позиція у рядку. Другий номер рядка.
    LCD.print("WORD");
    LCD.setCursor(8,1);
    LCD.print("WORD");
    delay(1000);
    LCD.noDisplay(); // Вимикає РК-дисплей
    delay(1000);
}