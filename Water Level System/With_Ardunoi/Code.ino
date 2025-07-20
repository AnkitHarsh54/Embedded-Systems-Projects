// Water Level Detector with Auto-Drain using Relay
const int probes[7] = {2, 3, 4, 5, 6, 7, 8};
const int relayPin = 13;
const int drainThreshold = 5;
int waterLevel = 0;

void setup() {
  Serial.begin(9600);
  for (int i = 0; i < 7; i++) {
    pinMode(probes[i], INPUT);
  }
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, LOW);
}

void loop() {
  waterLevel = 0;
  for (int i = 0; i < 7; i++) {
    if (digitalRead(probes[i]) == HIGH) {
      waterLevel++;
    }
  }

  Serial.print("Water Level: ");
  Serial.println(waterLevel);
  
  if (waterLevel >= drainThreshold) {
    Serial.println("\u26A0\uFE0F Water level high. Draining water...");
    digitalWrite(relayPin, HIGH);
  } else {
    digitalWrite(relayPin, LOW);
  }

  delay(500);
}

