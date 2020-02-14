const int ledPIN = 13;
 
int option;
 
void setup(){
  Serial.begin(9600);
  pinMode(ledPIN , OUTPUT); 
}
 
void loop(){
  //si existe información pendiente
  
    //leeemos la opcion
    

    if( Serial.available() > 0)
    {
      int input = Serial.read();
      if (input == '1')
      {
        digitalWrite(ledPIN, HIGH);
        delay(3000);
        String output = "Encendido @";
        output += millis();
        output += "ms";
        Serial.println(output);
      }
      else
      {
        
        digitalWrite(ledPIN, LOW);
        delay(3000);
        String output = "Apagado @";
        output += millis();
        output += "ms";
        Serial.println(output);
      
      }
    }
    
  
}
