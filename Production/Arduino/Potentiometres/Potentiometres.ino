void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(A0);

  delay(250);  // delay in between reads for stability

  if(sensorValue && sensorValue != 0 && sensorValue <= 250){
    Serial.println("monde 1");
  }

  else if(sensorValue && sensorValue != 0 && sensorValue > 251 && sensorValue <= 500){
    Serial.println("monde 2");
  }

  else if(sensorValue && sensorValue != 0 && sensorValue > 501 && sensorValue <= 750){
    Serial.println("monde 3");
  }

  else if(sensorValue && sensorValue != 0 && sensorValue > 751){
    Serial.println("monde 4");
  }
}
