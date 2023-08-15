# Cancela_Button_Arduino
 
## Primeiro Modelo:

<img src="/include/Captura%20de%20tela%20de%202023-08-14%2023-09-54.png">

## Modelo de Apresentação:

<img src="/include/Captura%20de%20tela%20de%202023-08-14%2022-53-30.png">

## Segundo Modelo:

<img src="/include/Captura%20de%20tela%20de%202023-08-14%2023-08-43.png">

## Matérias:

| Material | Quantidades |
| --- | --- |
| Palitos de picolé | 15-20 |
| Colar quente em tubos | 2 |
| fios | 9 |
| Resistor | 1 |
| Botão | 1 |
| Servo motor | 1 |
| Arduino | 1 |
| ProtoBoard | 1 |

## Motivos de escolhar dos Matérias:

```
1.O botão possui um tempo de resposta mais rápido do que o potenciômetro ou o interruptor deslizante.

2.O servo motor foi escolhido devido à inclusão da biblioteca Servo.h no Arduino IDE.
   
3.Além da biblioteca, é muito mais fácil programar o código utilizando a biblioteca do que fazer isso puramente sem ela.
   
4.E o número de linhas. Quanto mais bibliotecas forem usadas no projeto com Arduino e quanto menor for o número de linhas no código, mais rápido o projeto ficará.
```

## Instalar uma biblioteca no Arduino IDE:

### Passo 1:

<img src="/include/Captura%20de%20tela%20de%202023-08-14%2023-28-41.png">

### Passo 2:

<img src="/include/Captura%20de%20tela%20de%202023-08-14%2023-29-13.png">

## Instalar uma biblioteca no Vscode usando o Plaformio.io:

#### Digiter o nome da lib com o código no platformio.ini:

```platformio.ini
[env:uno]
platform = atmelavr
board = uno
framework = arduino
lib_deps = Servo
```

## Código:

```c++
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
```
