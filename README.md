<div>
	<h1 align="center">Semáforo básico en Arduino</h1>
	<img src="https://images.unsplash.com/photo-1580338909587-bc2d1a34ecd2?ixlib=rb-4.0.3&ixid=MnwxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8&auto=format&fit=crop&w=1470&q=80" width="100%" />
</div>

## ¿De qué trata?

Como su nombre lo indica, se trata de un proyecto simple que se suele dar al iniciar en el aprendizaje del uso de este Microcontrolador. Es un semáforo que utiliza 3 LEDs de diferentes colores.

**_ACLARACIÓN:_** En la carpeta _src_ podrás encontrar dos archivos principales con el código. Los cuales se diferencian por su extensión.
El archivo **.cpp** fue creado y utilizado en el IDE de **_Visual Studio Code_** y el archivo con la extensión **.ino** fue creado y utilizado en el IDE de **_Arduino_**.
_Dependiendo de cual IDE utilices, debes ver un código u otro; aunque no tienen tantas diferencias._

## Circuito electrónico

![](https://cdn.discordapp.com/attachments/1084217537383890954/1084217566236512326/image.png)

### Lista de materiales

- Arduino Uno
- Protoboard (plaqueta de pruebas)
- Jumpers macho-macho (son cables de colores)
- 3 LEDs (uno rojo, uno amarillo y otro verde) _El terminal más largo va a las resistencias_
- 3 Resistencias de 220 Ohm

## ¿Cómo funciona?

Los LEDs van encendiéndose y apagándose de forma secuencial, uno seguido de otro. Este efecto se logra gracias al _delay_ que fue colocado entre cada _digitalWrite_ del código.

![](https://cdn.discordapp.com/attachments/1084217537383890954/1084225547321741373/image.png)

En la sección de constantes, podrás alterar el valor del delay a tu gusto. Ten en cuenta que este se encuentra en _milisegundos_.
Tambien tienes la opción de cambiar el pin al que se conecta cada LED, pero te recomiendo no cambiarlos si eres principiante.

## Demo

[Probar en Tinkercad][tinker]

## Licencia usada

MIT License

[tinker]: https://www.tinkercad.com/things/17TKcz2eGv9
