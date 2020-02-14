// Arduprofe, Prueba movimiento Servomotores
// Mueve servos (8,7 y 4) de extremo a extremo con parada en el centro
// Debe instalr la libreria Servo.h para que funcione el programa

#include <Servo.h>                // Incluye la libreria Servo
 
Servo servo8;                    // Crea el objeto servo8 con las caracteristicas de Servo
Servo servo7;                    // Crea el objeto servo7 con las caracteristicas de Servo
Servo servo4;                    // Crea el objeto servo4 con las caracteristicas de Servo

void setup() 
{ 
  pinMode(13,OUTPUT);
  servo8.attach(8,660,1400);    // Asocia el servo1 al pin 8, define el min y max del ancho del pulso 
  servo7.attach(7,660,1400);                                  // eso depende del fabricante del servo
  servo4.attach(4,660,1400);   
}   
void loop() 
{                    
    servo8.write(0);                // Gira el servo a 30 grados  
    delay(1000);                     // Espera 1000 mili segundos a que el servo llegue a la posicion
    
    servo8.write(5);               // Gira el servo a 90 grados  
    delay(700);                       // Espera 700 mili segundos a que el servo llegue a la posicion 
   
         
} 
