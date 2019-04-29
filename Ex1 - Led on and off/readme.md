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

Ya tenemos todo listo para pasar a la siguiente parte, en la que empezaremos a configurar el Arduino Uno. Para ello simplemente copiamos el código del ejercicio y lo subimos a la placa. En este punto tuvimos algun problema con la subida porque habíamos seleccionado un puerto erróneo y no conseguía detectarlo, pero rápidamente lo solucionamos.

En esta prueba hicimos solo dos fotos, con las luces encendidas y apagadas. Viendo que este método no muestra realmente nada del proceso en las siguientes pruebas decidimos mejorarlo.

<img  width="300" src=ArduinoUnoEx1On.jpeg>

<img  width="300" src=ArduinoUnoEx1Off.jpeg>


### 