/*
 *  Projeto: Sensor Magnético Reed Switch com Arduino
 *  Arquivo: sensor_reed_switch_toggle.ino
 *  Descrição: Alterna o estado do LED (liga/desliga) cada vez que o ímã passa pelo sensor Reed Switch.
 *  
 *  Autoria: Juliano Daniel
 *  Repositório: https://github.com/JulianoDaniel/SensorReedSwitch
 *  Data: 27/05/2022
 *  Versão: 1.0
 *  
 *  Licença: MIT
 */

#define endR 10 
#define led  13
int estadoSensor = 0;

unsigned long timeEndR = 0;

void setup() {
  Serial.begin(9600);

  pinMode(led, OUTPUT);
  digitalWrite(led, LOW);  

  pinMode(endR, INPUT);
  digitalWrite(endR, LOW); 
  
  Serial.println(" Programa iniciado! ");

}

void loop() {
  
    if((millis() - timeEndR) >= 1000){
      if(digitalRead(endR)){ 
        estadosensor = !estadoSensor; 
      }
      
      if(estadoSensor){
        Serial.println(" Chave 1 ligada! "); 
        digitalWrite(led, HIGH);
      }else{
        Serial.println(" Chave 1 desligada! "); 
        digitalWrite(led, LOW);
      }

    timeEndR = millis();  
    }
  
}
