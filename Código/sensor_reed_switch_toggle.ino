/*  
* Liga e desliga o led 
* By JDev - https://github.com/JulianoDaniel
* 
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
