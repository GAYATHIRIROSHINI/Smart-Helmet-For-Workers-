#define LED_PIN 25
#define IR_PIN 27
#define BUZZER_PIN 26
#define LDR_PIN 34

void setup() {
  Serial.begin(115200);

  pinMode(LED_PIN, OUTPUT);
  pinMode(IR_PIN, INPUT_PULLUP);
  pinMode(BUZZER_PIN, OUTPUT);

  digitalWrite(LED_PIN, LOW);
  digitalWrite(BUZZER_PIN, LOW);

  Serial.println("SMART CONSTRUCTION HELMET");
  Serial.println("-------------------------");
}

void loop() {

  int irState = digitalRead(IR_PIN);
  int lightValue = analogRead(LDR_PIN);

  // =========================
  // LIGHT / HEADLIGHT CONTROL
  // =========================

  Serial.print("LDR Value: ");
  Serial.println(lightValue);

  if (lightValue > 1500) {
    digitalWrite(LED_PIN, HIGH);
    Serial.println("DARK -> HEADLIGHT ON");
  }
  else {
    digitalWrite(LED_PIN, LOW);
    Serial.println("BRIGHT -> HEADLIGHT OFF");
  }


  // =========================
  // IR PROXIMITY WARNING
  // =========================

  Serial.print("IR Value: ");
  Serial.println(irState);

 if (irState == HIGH) {

  digitalWrite(BUZZER_PIN, HIGH);

  Serial.println("NO OBSTACLE");
  Serial.println("BUZZER ON");

}
else {

  digitalWrite(BUZZER_PIN, LOW);

  Serial.println("OBSTACLE DETECTED");
  Serial.println("BUZZER OFF");
}

  Serial.println("-------------------------");

  delay(500);
}
