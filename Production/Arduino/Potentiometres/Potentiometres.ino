void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(A0);
  //Serial.println(sensorValue); //DEBUG
  delay(250);  // delay in between reads for stability

  if(sensorValue == 0){
    sensorValue = 1;
  }
  
  if(sensorValue && sensorValue >= 0 && sensorValue <= 204){
    Serial.println("1");
  }

  else if(sensorValue && sensorValue != 0 && sensorValue > 205 && sensorValue <= 409){
    Serial.println("2");
  }

  else if(sensorValue && sensorValue != 0 && sensorValue > 410 && sensorValue <= 613){
    Serial.println("3");
  }

  else if(sensorValue && sensorValue != 0 && sensorValue > 614 && sensorValue <=818){
    Serial.println("4");
  }

    else if(sensorValue && sensorValue != 0 && sensorValue > 819){
    Serial.println("5");
  }
}
