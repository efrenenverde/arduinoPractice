void setup() {
  // iniciamos pins
  for ( int i = 11 ; i <= 13 ; i++)
  {
    pinMode(i, OUTPUT);
  }

}

// en el loop principal, simplemente encendemos los pins 11 y 13 con un bucle for modificado, los apagamos y hacemos lo propio con el 12 por separado para completar lo que pide el ejercicio
void loop() {
 
  for(int i=11; i<=13 ;i+=2){
    digitalWrite( i , HIGH) ;
  }
  delay(1000);
  for(int i=11; i<=13 ;i+=2){
    digitalWrite( i , LOW) ;
  }
  delay(1000);
  digitalWrite(12, HIGH);
  delay(1000);
  digitalWrite(12, LOW);
  delay(1000);
}
