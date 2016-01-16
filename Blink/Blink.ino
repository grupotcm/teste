/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:


// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
      
  pinMode(24, OUTPUT);  
  pinMode(26, OUTPUT);  
  pinMode(50, OUTPUT);  
   
}

// the loop routine runs over and over again forever:
void loop() {
  
  
  digitalWrite(24, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);               // wait for a second
  digitalWrite(24, LOW);    // turn the LED off by making the voltage LOW
  delay(500);  
  digitalWrite(26, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);               // wait for a second
  digitalWrite(26, LOW);    // turn the LED off by making the voltage LOW
  delay(500);  
  digitalWrite(50, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);               // wait for a second
  digitalWrite(50, LOW);    // turn the LED off by making the voltage LOW
  delay(500); 

}
