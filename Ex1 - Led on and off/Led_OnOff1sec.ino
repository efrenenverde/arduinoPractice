// Guardamos 13 en led para indicar que ese es el puerto que usa en la placa
// Más adelante usaremos "led" para decirle al programa que active el puerto 13
int led = 13;

// setup se activa cuando encendemos el Arduino
void setup() {
  // Esto marca el puerto led como output
  pinMode(led, OUTPUT);
}

// loop se repetirá una y otra vez en cuanto termine de ejecutarse
void loop() {
  digitalWrite(led, HIGH);   // Esta línea le mete voltaje al puerto led (13) por lo que nuestro led se enciende
  delay(1000);               // espera 1000ms (un segundo)
  digitalWrite(led, LOW);    // Apaga el Led bajando el voltaje del puerto led
  delay(1000);               // espera un segundo de nuevo
}
