// C++ code 
// Manipulador 
//Inclui a biblioteca do servomotor 
#include <Servo.h> 
//define os pinos dos potenciômetros 
#define pot1 A0 
#define pot2 A1 
#define pot3 A2 
#define pot4 A3 
//define os pinos dos servomotores 
#define pinmotor1 8 
#define pinmotor2 9 
#define pinmotor3 10 
#define pinmotor4 11 
//nomes dos servos 
Servo motor1,motor2,motor3,motor4; 
//cria as variaveis dos ângulos 
int angulo1,angulo2,angulo3,angulo4; 
//atribui os pinos dos servos as suas variáveis 
void setup(){ 
motor1.attach(pinmotor1); 
motor2.attach(pinmotor2);
motor3.attach(pinmotor3); 
motor4.attach(pinmotor4); 
} 
//lê a posição dos potenciômetros e envia o sinal para os servos 
void loop(){ 
angulo1=map(analogRead(pot1),0,1023,0,180); 
motor1.write(angulo1); 
angulo2=map(analogRead(pot2),0,1023,0,180); 
motor2.write(angulo2); 
angulo3=map(analogRead(pot3),0,1023,0,180); 
motor3.write(angulo3); 
angulo4=map(analogRead(pot4),0,1023,0,180); 
motor4.write(angulo4); 
}
