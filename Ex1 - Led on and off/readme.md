# Ejercicio 1; Led on off

By: Efrén Alonso
Con: Iago Sieiro y Miguel Gomez

### Preparación

Antes de poder entrar al desarrollo de la actividad tenemos que diseñar el prototipo en un simulador online, preparar los drives y conseguir un programa para gestionar el arduino.

La primera parte es la más sencilla, accedemos a la Tinkercad y tras registrarnos entramos a la sección de [circuits](https://www.tinkercad.com/circuits) donde ya tenemos todo lo necesario para proceder. Es muy sencillo completar el ejercicio basándonos en las imágenes de referencia.

<img  width="300" src=ArduinoUnoEx1Circuit.png>

Para poder detectar las placas correctamente necesitaremos los drivers que Arduino, que conseguimos sigiendo [esta guia](https://www.arduino.cc/en/Guide/DriverInstallation)

Para poder manejar la información de la placa, instalaremos [Arduino IDE](https://www.arduino.cc/en/Main/Software)

Iniciamos Arduino IDE y buscamos el puerto correspondiente a nuestra placa, configurando tambien el modelo y demás información relevante bajo la pestaña de "herramientas".

### Desarrollo del Ejercicio

Ya tenemos todo listo para pasar a la siguiente parte, en la que empezaremos a configurar el Arduino Uno. Para ello simplemente copiamos el código del ejercicio y lo subimos a la placa. En este punto tuvimos algun problema con la subida porque habíamos seleccionado un puerto erróneo y no conseguía detectarlo, pero rápidamente lo solucionamos.

En esta prueba hicimos solo dos fotos, con las luces encendidas y apagadas. Viendo que este método no muestra realmente nada del proceso en las siguientes pruebas decidimos mejorarlo.

<img  width="300" src=ArduinoUnoEx1On.jpeg> <img  width="300" src=ArduinoUnoEx1Off.jpeg>

La siguiente parte del ejercicio es aplicar modificaciones al código para comprobar que lo entendemos. Esta parte la llevé a cabo editando el código con comentarios en los que hago referencia a qué hace cada línea, en el archivo "Led_OnOff1sec.ino" se encuentra el código original con el añadido de mis comentarios explicando cada parte, y "Led_OnOff01sec.ino" es la versión modificada en la que reducimos el tiempo entre flashes para darle un toque más fiestero al LED.

Este [video](https://github.com/efrenenverde/arduinoPractice/blob/master/Ex1%20-%20Led%20on%20and%20off/ArduinoUnoEx1Video.mp4) muestra el resultado de nuestra prueba con el ritmo aumentado.

