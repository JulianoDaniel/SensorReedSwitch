/*
 *  Projeto: Sensor Magnético Reed Switch com Arduino
 *  Arquivo: sensor_reed_switch_basico.ino
 *  Descrição: Acende um LED enquanto o ímã estiver próximo ao sensor Reed Switch.
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
    if((millis() - timeEndR) >= 300){
      if(digitalRead(endR)){ 
        Serial.println(" Chave 1 ligada! "); 
        digitalWrite(led, HIGH);
      }else{
        Serial.println(" Chave 1 desligada! "); 
        digitalWrite(led, LOW);
      }

    timeEndR = millis();  
    }
}