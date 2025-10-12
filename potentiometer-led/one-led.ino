#define led 8
int level = 0;
void setup()
{
  pinMode(led, OUTPUT);
}

void loop()
{
  level = analogRead(A0);
  level = level / 4;
  delay(100);
  analogWrite(led, level);
  delay(100);
}