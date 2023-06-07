void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

unsigned long lastBlink = micros();
void loop() {
  static unsigned long blinkInterval = 1000000 / 5; // interval in Hertz
  if ( micros() - lastBlink >= blinkInterval ) {
    lastBlink = micros();
    digitalWrite( LED_BUILTIN, digitalRead(LED_BUILTIN)==LOW? HIGH:LOW );
  }
}
