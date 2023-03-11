/* Definir los pines de los LEDs */
#define LED_G 2 // lED Verde (Green)
#define LED_Y 3 // LED Amarillo (Yellow)
#define LED_R 4 // LED Rojo (Red)

/* Delay en milisegundos */
#define DELAY 1200

void setup(){
  /* Definir los pines de los LEDs como salidas */
  for(int i = 2; i <= 4; i++){
    pinMode(i, OUTPUT);
  }
}

void loop(){
	digitalWrite(LED_R, HIGH);
	delay(DELAY);
  
	digitalWrite(LED_R, LOW);
	digitalWrite(LED_Y, HIGH);
	delay(DELAY);
  
	digitalWrite(LED_Y, LOW);
	digitalWrite(LED_G, HIGH);
	delay(DELAY);
  
	digitalWrite(LED_G, LOW);
}