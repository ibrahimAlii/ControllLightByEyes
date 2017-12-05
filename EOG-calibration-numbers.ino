const int EOGpin = A1; //analog pin

void setup() {
  Serial.begin(115200);
  pinMode(EOGpin, INPUT);

}

void loop() {
  int EOG_Reading = analogRead(EOGpin);

  Serial.println(EOG_Reading);
  delay(700); //just here to slow down the output for easier reading
}
