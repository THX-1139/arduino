#define button 2
bool butState = false;

void setup(){
    pinMode(button, INPUT);
    Serial.begin(115200);
}

void loop(){
    butState = digitalRead(button);
    if (buttonState == true) {
        Serial.println("Button down!");
    }
    else {
        Serial.println("Button up!");

    }
}