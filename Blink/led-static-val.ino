#define led 13

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600); // Iніціалізація паралельного порту
  Serial.println("Sketch «Blink» static runned...");
}

void loop() {
  blink(led);
}

void blink(int pin){
  static bool state = false; // Iніціалізація локальної статичної змінної.
  state = !state; // Iнверсія значення та запис
  digitalWrite(pin, state); // Можна передавати до цієї функції значення змінної т.к. вона логічна і відповідає двом можливим варіантам значень.
  if (state == true) {
    Serial.println("Led on!");
  }
  else {
    Serial.println("Led off!");
  }
   delay(1000);
}
