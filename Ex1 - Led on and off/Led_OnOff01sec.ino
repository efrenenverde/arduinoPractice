int led = 13;

void setup() {
  // Esto marca el puerto led como output
  pinMode(led, OUTPUT);
}

// Para comprobar que entendemos bien el proceso, decidimos ponerlo en modo rave bajando la velocidad a 100ms
void loop() {
  digitalWrite(led, HIGH);
  delay(100);
  digitalWrite(led, LOW);
  delay(100);
}
