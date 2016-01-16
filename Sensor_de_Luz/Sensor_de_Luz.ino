//TEMPERATURA


const int PinoSensor = 8;//pino Anlógico de Entrada 0 int ValorSensor = 0;
int ValorSensor=0;
  void setup()
  {
    Serial.begin(9600);
    pinMode(34,OUTPUT);
  }


   void loop()
   {
      ValorSensor = analogRead(PinoSensor); 
      Serial.print("Valor do Sensor = ");
      Serial.println(ValorSensor);       
      if(ValorSensor < 200)
      {
           digitalWrite(34,HIGH);
      }else{
           digitalWrite(34,LOW);
      }
      delay(500);
   }
