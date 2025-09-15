#define PIN_LED 7

void setup() {
  Serial.begin(115200);
  while(!Serial);
  pinMode(PIN_LED, OUTPUT);
}

void loop() {
  digitalWrite(PIN_LED, 0);
  delay(1000);
  for(unsigned int i = 1; i <= 10; i++) {
    digitalWrite(PIN_LED, i & 1);
    delay(100);
  }
  digitalWrite(PIN_LED, 1);
  for(;;);
}
