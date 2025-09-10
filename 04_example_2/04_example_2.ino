#define PIN_LED 13

void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200);
  while(!Serial);
}

void loop() {
  Serial.println("Hello World");
  delay(1000);
}