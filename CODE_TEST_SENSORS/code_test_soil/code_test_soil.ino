void setup() {
  Serial.begin(115200);
  pinMode(34, INPUT);
}

void loop() {
  int soilMoistureValue = analogRead(34);
  Serial.println(soilMoistureValue);
  delay(1000);
}
// send the values to me ^-^
