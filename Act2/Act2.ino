void setup() {
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}
void loop() {
  delay(1000);
  analogWrite(9, 32);
  analogWrite(10, 0);
  analogWrite(11, 0);
  delay(1000);
  analogWrite(9, 32);
  analogWrite(10, 32);
  analogWrite(11, 32);
  delay(1000);
  analogWrite(9, 0);
  analogWrite(10, 32);
  analogWrite(11, 0);
}
