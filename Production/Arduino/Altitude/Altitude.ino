void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(A0);
  int altitude = map(sensorValue, 1, 1023, 1, 100); //ICI T'AS JUSTE À CHANGER LES 2 DERNIERS CHIFFRES POUR L'ALTITUDE
  //Serial.println(sensorValue); //DEBUG
  delay(250);  // delay in between reads for stability

  Serial.println(altitude);
}

