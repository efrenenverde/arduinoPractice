// Declaramos en Setup una nueva variable tiempo con la que controlaremos la velocidad
int tiempo = 200;
void setup() {
  // Inicializamos los pins del 11 al 13 para manejarlos luego

  for ( int i = 11 ; i <= 13 ; i++)
  {
    pinMode(i, OUTPUT);
  }

}

// Aquí el loop de acción que se repite constantemente, y dentro hemos colocado un for que encenderá las luces de una en una y en cada pasada reducirá el tiempo que permanecen encendidas las luces.
void loop() {
  
  for (int i=11 ; i <= 13 ; i++)
    {
    digitalWrite( i , HIGH) ;
    delay (tiempo) ;
    digitalWrite( i , LOW);
    delay (tiempo) ;
    if(tiempo >= 100){
      tiempo = tiempo - 2;
    }
  }
}
