int ldrPin = 34;
int buzzerPin = 25;
unsigned long startTime = 0;
bool doorOpen = false;

void setup() {
  pinMode(buzzerPin, OUTPUT);
  digitalWrite(buzzerPin, LOW);
  Serial.begin(115200);
}

void loop() {
  int ldrValue = analogRead(ldrPin);
  Serial.println(ldrValue);

  if (ldrValue > 1000) {
    if (!doorOpen) {
      doorOpen = true;
      startTime = millis();
    } else if (millis() - startTime > 30000) {
      digitalWrite(buzzerPin, HIGH);
    }
  } else {
    doorOpen = false;
    digitalWrite(buzzerPin, LOW);
  }

  delay(100);
}
