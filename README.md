# Sensor Magnético Reed Switch - (EndStop Magnético)
Exemplo de uso de sensor fim de curso magnético Reed Switch com Arduino.


A conexão do sensor tipo Reed Switch é bem simples. O sensor é montado usando o modelo de Pull-Down de forma semelhante ao botão táctil (Push Button). Quando seguramos um ímã próximo ao sensor, os terminais do mesmo se fecham e a chave deixa passar o sinal para o pino configurado como entrada no Arduino.

O exemplo é acionar um led, mas podemos ativar qualquer dispositivo, acender uma luz, ativar um alarme, etc.

# Requisitos

+ Uma protoboard 
+ Um sensor do tipo Reed Switch 
+ Um Arduino ou Esp
+ Fios para conexão
+ Um led 
+ Dois resistores de 1k 

Montamos o seguinte esquema na protoboard.
<div align="center">
  <img src="https://user-images.githubusercontent.com/46107950/170777415-3b223caa-990a-4288-b40d-d99cc64c8402.png" />
</div>
<br/> 

Com o esquema montado na Protoboard, grave o Sketch ppa.ino para o Arduino.

Teste o arquivo ppa2.ino se a intenção for deixar um led ligado apenas passando o ímã pelo sensor,<br> 
dessa forma, alterando o estado "ligado/desligado" da chave.

<br><hr>
<div align="left">
  <img src="https://licensebuttons.net/l/zero/1.0/80x15.png" />
</div>
<br/> 

