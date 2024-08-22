void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  static uint32_t blinkInterval = 1000000; // interval in microseconds
  static uint32_t lastBlink = micros();
  if ( micros() - lastBlink >= blinkInterval ) {
    lastBlink = micros();
    digitalWrite( LED_BUILTIN, digitalRead(LED_BUILTIN)==LOW? HIGH:LOW );
  }
}
