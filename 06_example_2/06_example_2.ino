#define PIN_LED 9

void setup() {
  pinMode(PIN_LED, OUTPUT);
}

void loop() {
  for(int i = 0; i < 256; i++) {
    analogWrite(PIN_LED, i);
    delay(5);
  }
  for(int i = 255; i >= 0; i--) {
    analogWrite(PIN_LED, i);
    delay(5);
  }
}
