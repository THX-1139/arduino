#define trigPin = 9;
#define echoPin = 10;

float distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  distance = hc04(trigPin);
  Serial.print("Distance: ");
  Serial.println(distance);
  delay(100);
}

int hc04(int trigPin) {
  float duration, distance; 
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration*.0343)/2;
  delay(100);
  return distance;
}
