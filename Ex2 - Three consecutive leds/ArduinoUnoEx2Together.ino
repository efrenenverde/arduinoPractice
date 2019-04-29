// Quitamos tiempo del setup ya que ahora no nos hará falta
void setup() {
  // iniciamos los pins

  for ( int i = 11 ; i <= 13 ; i++)
  {
    pinMode(i, OUTPUT);
  }

}

// hacemos un loop, en el que simplemente cada segundo encendemos y apagamos los leds a la vez
void loop() {
 
  for(int i=11; i<=13 ;i++){
    digitalWrite( i , HIGH) ;
  }
  delay(1000);
  for(int i=11; i<=13 ;i++){
    digitalWrite( i , LOW) ;
  }
  delay(1000);
}
