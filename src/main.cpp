#include <Arduino.h> // Lib do Arduino para o Vscode.
#include <Servo.h> // Lib do Servo Motor CC;

Servo servo_pin_3; // Comando da lib Servo.h;
int btn=4; // Variavel do botão no pino 4;

void setup() {
  servo_pin_3.attach(3);// Ativa o Servo Motor no pino 3;
  pinMode(btn,INPUT);// Colocando o tipo do elemento do botão;
}

void loop() {
  // Estrutura de Condicional para Servo Motor ser Ativo;
  if(digitalRead(btn)==(HIGH)){
    servo_pin_3.write(98);// Caso for Ativo faça uma rotação de 98 grau;
  }else{
    servo_pin_3.write(0);// Caso não for Ativo faça uma rotação de 0 grau;
  }
  delay(10);// 10 milissegudos;
}