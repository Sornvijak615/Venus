const int trig = 12;
const int echo = 13;

const int LED1 = 3;
const int LED2 = 5;
const int LED3 = 6;

int duration = 0;
int distance = 0;

void setup() {
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);

  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  digitalWrite(trig, HIGH);
  delayMicroseconds(1000);
  digitalWrite(trig, LOW);

  duration = pulseIn(echo, HIGH);
  distance = (duration / 2) / 28.5;
  Serial.println(distance);

  if (distance <= 7) {
    analogWrite(LED1, 32);
  } else {
    analogWrite(LED1, 0);
  }
  if (distance <= 14 && distance > 7) {
    analogWrite(LED1, 32);
    analogWrite(LED2, 32);
    analogWrite(LED3, 32);
  } else {
    analogWrite(LED1, 0);
    analogWrite(LED2, 0);
    analogWrite(LED3, 0);
  }
  if (distance <= 21 && distance > 14) {
    analogWrite(LED2, 32);
  } else {
    analogWrite(LED2, 0);
  }
}
