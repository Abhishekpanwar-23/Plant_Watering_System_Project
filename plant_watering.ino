const int sensorPin = A0;
const int relayPin = 7;
int soilDryThreshold = 700;

void setup() {
  Serial.begin(9600);
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, HIGH);
}

void loop() {
  int sensorValue = analogRead(sensorPin);
  Serial.print("Soil Moisture Reading: ");
  Serial.println(sensorValue);

  if (sensorValue > soilDryThreshold) {
    Serial.println("Soil is dry! Turning pump ON for 2 seconds.");
    digitalWrite(relayPin, LOW);
    delay(2000);
    digitalWrite(relayPin, HIGH);
    Serial.println("Pump is now OFF. Waiting before next check.");
    delay(5000);
  } else {
    Serial.println("Soil is moist. Pump remains OFF.");
  }
  delay(1000);
}
