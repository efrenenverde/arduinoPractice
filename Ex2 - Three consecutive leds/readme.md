# Ejercicio 2; Three Consecutive Leds

By: Efrén Alonso
Con: Iago Sieiro y Miguel Gomez

### Preparación

Ahora que tenemos todo configurado y entendemos mejor los programas gracias al ejercicio anterior, la preparación es muy sencilla. Solo necesitamos conseguir dos leds mas con sus correspondientes cables.
El ejercicio propone usar Tinkercad o una página diferente para gestionar el código pero nos ha parecido poco práctica, así que nos quedamos con Tinkercad.

### Desarrollo del Ejercicio

Montamos el circuito en Tinkercad para comprobar que todo esté correcto, usando el siguiente esquema de circuito y el código básico funciona a la perfección.

<img width="300" src=ArduinoUnoEx2Circuit.png>

Pasamos el circuito a la placa y [funciona correctamente](ArduinoUnoEx2VideoBasic.mp4), aunque en este punto decidimos pecir una protoboard porque hacerlo a mano es altamente incómodo.

Continuando con el ejercicio, conseguimos que los tres leds se iluminen [progresivamente más rápido](ArduinoUnoEx2VideoFaster.mp4) usando el código subido y comentado en [ArduinoUnoEx2Faster.ino](ArduinoUnoEx2Faster.ino).

Para la siguiente sección, conseguimos que los leds [parpadeen juntos](ArduinoUnoEx2VideoTogether.mp4) usando [este código](ArduinoUnoEx2Together.ino).

Y terminamos el ejercicio cuando conseguimos que los leds se enciendan [por grupos](ArduinoUnoEx2VideoOddsEvens.mp4), primero los que se encuentran en puertos impares y luego el del puerto par, usando [este código](ArduinoUnoEx2OddsEvens.mp4).
