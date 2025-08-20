#define led = 13;
int val;

void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  digitalWrite(led, HIGH);
}
void loop()
{
  if (Serial.available())
  {
    val = Serial.read(); // При символе "1" включаем светодиод
    if (val == '1') {
      digitalWrite(led, HIGH);
    }
    if ( val == '0') { // При символе "0" выключаем светодиод
      digitalWrite(led, LOW);
    }
  }
}