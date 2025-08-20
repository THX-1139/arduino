#define ena = 10;
#define in1 = 9;
#define in2 = 8;
#define in3 = 7;
#define in4 = 6;
#define enb = 5;

int M1_Speed = 80; // la vitesse du moteur 1
int M2_Speed = 80; // la vitesse du moteur 2

int command = 0;

void setup() {
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);
  pinMode(enA,OUTPUT);
  pinMode(enB,OUTPUT);

  Serial.begin(9600);
  stop();
}

void loop() {
  if (Serial.available()) {
    command = Serial.read(); 
    if (val == '1') {
      forward();
    }
    else if ( command == '2') { // При символе "0" выключаем светодиод
      backward();
    }
    else if ( command == '3'){
      right();
    }
    else if ( command == '4'){
      left();
    }
    else if (command == '0'){
      stop();
    }

  }
}

void stop() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}

void forward() {
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(enA, M1_Speed);
  analogWrite(enB, M2_Speed);
}

void backward() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  analogWrite(enA, M1_Speed);
  analogWrite(enB, M2_Speed);
}

void left() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(enA, M1_Speed);
  analogWrite(enB, M2_Speed);
}

void right() {
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  analogWrite(enA, M1_Speed);
  analogWrite(enB, M2_Speed);
}
