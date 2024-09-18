void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(A0);
  int vitesse = map(sensorValue, 1, 1023, 1, 10); //ICI T'AS JUSTE À CHANGER LES 2 DERNIERS CHIFFRES POUR L'ALTITUDE
  //Serial.println(sensorValue); //DEBUG
  delay(200);  // delay in between reads for stability
  Serial.println("Vitesse :");
  Serial.println(vitesse);
}

