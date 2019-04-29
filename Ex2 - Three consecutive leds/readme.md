# Ejercicio 2; Three Consecutive Leds

By: Efrén Alonso
Con: Iago Sieiro y Miguel Gomez

### Preparación

Ahora que tenemos todo configurado y entendemos mejor los programas gracias al ejercicio anterior, la preparación es muy sencilla. Solo necesitamos conseguir dos leds mas con sus correspondientes cables.
El ejercicio propone usar Tinkercad o una página diferente para gestionar el código pero nos ha parecido poco práctica, así que nos quedamos con Tinkercad.

### Desarrollo del Ejercicio

Montamos el circuito en Tinkercad para comprobar que todo esté correcto, usando el siguiente esquema de circuito y el código básico funciona a la perfección.

<img  width="300" src=ArduinoUnoEx2Circuit.png>

Para poder detectar las placas correctamente necesitaremos los drivers que Arduino, que conseguimos sigiendo [esta guia](https://www.arduino.cc/en/Guide/DriverInstallation)

Para poder manejar la información de la placa, instalaremos [Arduino IDE](https://www.arduino.cc/en/Main/Software)

Iniciamos Arduino IDE y buscamos el puerto correspondiente a nuestra placa, configurando tambien el modelo y demás información relevante bajo la pestaña de "herramientas".

Ya tenemos todo listo para pasar a la siguiente parte, en la que empezaremos a configurar el Arduino Uno. Para ello simplemente copiamos el código del ejercicio y lo subimos a la placa. En este punto tuvimos algun problema con la subida porque habíamos seleccionado un puerto erróneo y no conseguía detectarlo, pero rápidamente lo solucionamos.

En esta prueba hicimos solo dos fotos, con las luces encendidas y apagadas. Viendo que este método no muestra realmente nada del proceso en las siguientes pruebas decidimos mejorarlo.

<img  width="300" src=ArduinoUnoEx1On.jpeg> <img  width="300" src=ArduinoUnoEx1Off.jpeg>

La siguiente parte del ejercicio es aplicar modificaciones al código para comprobar que lo entendemos. Esta parte la llevé a cabo editando el código con comentarios en los que hago referencia a qué hace cada línea, en el archivo "Led_OnOff1sec.ino" se encuentra el código original con el añadido de mis comentarios explicando cada parte, y "Led_OnOff01sec.ino" es la versión modificada en la que reducimos el tiempo entre flashes para darle un toque más fiestero al LED.

Este [video](https://github.com/efrenenverde/arduinoPractice/blob/master/Ex1%20-%20Led%20on%20and%20off/ArduinoUnoEx1Video.mp4) muestra el resultado de nuestra prueba con el ritmo aumentado.
