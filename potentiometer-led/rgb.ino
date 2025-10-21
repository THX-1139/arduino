#define green 8
#define blue 9
#define red 10

void setup()
{
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(red, OUTPUT);
}

void loop()
{
  setBright(red, A0);
  setBright(green, A1);  
  setBright(blue, A2);
}

void setBright(int pinColor, char potential) {
  int level = 0;
  level = analogRead(potential);
  level = level / 4;
  delay(100);
  analogWrite(pinColor, level);
}