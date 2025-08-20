#define rouge = 4;
#define jaune = 5;
#define vert = 4;

void setup() { 
  pinMode(rouge, OUTPUT); 
  pinMode(jaune, OUTPUT);
  pinMode(vert, OUTPUT);
}

void loop() { 
  digitalWrite(rouge, HIGH);
  digitalWrite(jaune, LOW); 
  delay(1000); 
  digitalWrite(rouge, LOW); 
  digitalWrite(jaune, HIGH); 
  delay(1000);
  digitalWrite(jaune, LOW); 
  digitalWrite(vert, HIGH); 
  delay(1000);
  digitalWrite(vert, LOW); 
  digitalWrite(jaune, HIGH); 
  delay(1000);
}