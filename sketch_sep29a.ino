int soilMoistureValue = 0;
int percentage = 0;

void setup() {
  pinMode(3, OUTPUT);
    pinMode(A0, INPUT);
Serial.begin(9600);
}

void loop() {

  soilMoistureValue = analogRead(A0);
      Serial.println(soilMoistureValue);
  percentage = map(soilMoistureValue, 490, 1023, 0, 100); 

  if (percentage < 30) {
    Serial.println("Pump on");
    digitalWrite(3, LOW);
  } else {
    Serial.println("Pump off");
    digitalWrite(3, HIGH);
  }
  delay(1000); 
}
