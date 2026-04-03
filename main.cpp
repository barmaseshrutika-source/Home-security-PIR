int pirPin = 2;
int ledPin = 13;
int motion;

void setup() {
  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  motion = digitalRead(pirPin);

  if (motion == HIGH) {
    digitalWrite(ledPin, HIGH);
    Serial.println("Motion Detected!");
  } else {
    digitalWrite(ledPin, LOW);
    Serial.println("No Motion");
  }

  delay(500);
}
