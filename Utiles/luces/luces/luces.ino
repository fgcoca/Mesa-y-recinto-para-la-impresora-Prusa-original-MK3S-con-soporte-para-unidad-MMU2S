#include <Adafruit_NeoPixel.h>
#include <avr/power.h>

//Designamos nuestro pin de datos
#define PIN 6
#define Blanco 4
//Designamos cuantos pixeles tenemos en nuestra cinta led RGB
#define NUMPIXELS     32

//Definimos el número de pixeles de la cinta y el pin de datos
//   Parámetro 1 = número de pixeles de la cinta
//   Parámetro 2 = número de pin de datos del Arduino
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

// IMPORTANTE: Para reducir el riesgo de dañar los pixeles de la cinta, añada un condensador de 1000 uF a través de
// los cables de alimentación de la cinta, agregue una resistencia de 300-500 Ohm en la entrada de datos del primer pixel
// Y reduzca la distancia entre Arduino y el primera pixel. 
// Evite realizar conexiones en el circuito vivo si lo va a hacer, conecte GND primero.

void setup() {
// Inicializamos nuestra cinta led RGB
  pixels.begin(); 
  
}

void loop() {

  //Definimos nuestras variables de tipo uint32 para cada color que utilizaremos
  // pixels.Color toma valores en RGB, desde 0,0,0 hasta 255,255,255
   uint32_t rojo = pixels.Color(150,0,0);
   uint32_t verde = pixels.Color(0,150,0);
   uint32_t azul = pixels.Color(0,0,150);

  int delayval = 50; // Pausa de cincuenta milisegundos
if (digitalRead(Blanco) == HIGH)
{
  // La numeración de leds en la cinta RGB es la siguiente:  el primer pixel es 0, el segundo es 1 y asi sucesivamente hasta el número total de leds menos uno
  for(int i=0;i<NUMPIXELS;i++){

    pixels.setPixelColor(i, rojo); // Brillo moderado en rojo

    pixels.show();   // Mostramos y actualizamos el color del pixel de nuestra cinta led RGB

    delay(delayval); // Pausa por un periodo de tiempo (en milisegundos).

  }
  
  //Realizamos lo mismo para los colores verde y azul
    for(int i=0;i<NUMPIXELS;i++){

    pixels.setPixelColor(i, verde); // Brillo moderado en verde

    pixels.show();   // Mostramos y actualizamos el color del pixel de nuestra cinta led RGB

    delay(delayval); // Pausa por un periodo de tiempo (en milisegundos).

  }
    
    for(int i=0;i<NUMPIXELS;i++){

    pixels.setPixelColor(i, azul); // Brillo moderado en azul

    pixels.show();   // Mostramos y actualizamos el color del pixel de nuestra cinta led RGB

    delay(delayval); // Pausa por un periodo de tiempo (en milisegundos).

  }
  
  delay(1000);  // Pausa de un segundo
  
  //Variamos los colores de cada led en nuestra cinta RGB cada medio segundo
   uint32_t amarillo = pixels.Color(150,150,0);
   uint32_t morado = pixels.Color(150,0,150);
   uint32_t celeste = pixels.Color(0,150,150);
   uint32_t blanco = pixels.Color(150,150,150);
   
    delayval=500;
    
    pixels.setPixelColor(0, rojo); // Brillo moderado en rojo
    pixels.show();   // Mostramos y actualizamos el color del pixel de nuestra cinta led RGB
    delay(delayval); // Pausa por un periodo de tiempo (en milisegundos).
    
    pixels.setPixelColor(1, verde); // Brillo moderado en verde
    pixels.show();   // Mostramos y actualizamos el color del pixel de nuestra cinta led RGB
    delay(delayval); // Pausa por un periodo de tiempo (en milisegundos).
    
    pixels.setPixelColor(2, azul); // Brillo moderado en azul
    pixels.show();   // Mostramos y actualizamos el color del pixel de nuestra cinta led RGB
    delay(delayval); // Pausa por un periodo de tiempo (en milisegundos).
    
    pixels.setPixelColor(3, amarillo); // Brillo moderado en amarillo
    pixels.show();   // Mostramos y actualizamos el color del pixel de nuestra cinta led RGB
    delay(delayval); // Pausa por un periodo de tiempo (en milisegundos).
    
    pixels.setPixelColor(4, morado); // Brillo moderado en morado
    pixels.show();   // Mostramos y actualizamos el color del pixel de nuestra cinta led RGB
    delay(delayval); // Pausa por un periodo de tiempo (en milisegundos).
    
    pixels.setPixelColor(5, celeste); // Brillo moderado en celeste
    pixels.show();   // Mostramos y actualizamos el color del pixel de nuestra cinta led RGB
    delay(delayval); // Pausa por un periodo de tiempo (en milisegundos).
    
    pixels.setPixelColor(6, blanco); // Brillo moderado en blanco
    pixels.show();   // Mostramos y actualizamos el color del pixel de nuestra cinta led RGB
    delay(delayval); // Pausa por un periodo de tiempo (en milisegundos).
    
    pixels.setPixelColor(7, rojo); // Brillo moderado en rojo
    pixels.show();   // Mostramos y actualizamos el color del pixel de nuestra cinta led RGB
    delay(delayval); // Pausa por un periodo de tiempo (en milisegundos).
    
    pixels.setPixelColor(8, verde); // Brillo moderado en verde
    pixels.show();   // Mostramos y actualizamos el color del pixel de nuestra cinta led RGB
    delay(delayval); // Pausa por un periodo de tiempo (en milisegundos).
    
    pixels.setPixelColor(9, azul); // Brillo moderado en azul
    pixels.show();   // Mostramos y actualizamos el color del pixel de nuestra cinta led RGB
    delay(delayval); // Pausa por un periodo de tiempo (en milisegundos).
}
else{     
for (int nled = 0; nled < 33; nled++) {
 pixels.setPixelColor(nled,255,255,255);
 pixels.show();   
  }
 } 
}
