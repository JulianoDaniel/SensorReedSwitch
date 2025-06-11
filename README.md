# Sensor Magnético Reed Switch - (EndStop Magnético)

Exemplo de uso de sensor magnético Reed Switch com Arduino. 

## Funcionalidades
Quando um ímã se aproxima do sensor Reed Switch, seus terminais internos se fecham, funcionando como uma chave magnética. Isso permite que o sinal chegue ao pino configurado como entrada digital no Arduino ou ESP.

A ligação é simples, utilizando o modo pull-down, da mesma forma que se conecta um botão (push button).
Quando o sensor está aberto, o sinal permanece em LOW (0). Quando o ímã se aproxima, o sensor fecha o circuito e o sinal vai para HIGH (1).

## O que o projeto faz?

O exemplo básico acende um LED quando o sensor é ativado.
Mas essa lógica pode ser usada para acionar qualquer dispositivo, como:

+ Alarmes
+ Luzes
+ Motores
+ Sistemas de automação residencial
+ EndStop para impressoras 3D ou CNC

## Como utilizar?

1. Monte o circuito na protoboard seguindo o **esquema.png** disponível na pasta **Circuito** no repositório.

2. Envie o código **sensor_reed_switch_basico.ino** da pasta **Sketch** para o Arduino. Nesse modo, o LED fica aceso enquanto o ímã estiver próximo do sensor.

3. Se quiser que o LED permaneça ligado após passar o ímã (funcionando como um botão liga/desliga), use o código **sensor_reed_switch_toggle.ino** na pasta **Sketch**. Assim, a cada aproximação do ímã, o estado do LED alterna entre ligado e desligado.

## Requisitos

+ Uma protoboard 
+ Um sensor do tipo Reed Switch 
+ Um Arduino ou Esp
+ Jumpers/Fios para conexão
+ Um led 
+ Dois resistores de 1k 

## Esquema na protoboard.

<div align="center">
  <img src="https://user-images.githubusercontent.com/46107950/170777415-3b223caa-990a-4288-b40d-d99cc64c8402.png" />
</div>
<br/> 

<br><hr>
<div align="left">
  <img src="https://licensebuttons.net/l/zero/1.0/80x15.png" />
</div>
<br/> 

