const int pinLED = 13;  // Pin 13 es el LED integrado en la mayoría de Arduino

void setup() {
  pinMode(pinLED, OUTPUT);
}

void loop() {
  digitalWrite(pinLED, HIGH);   
  delay(1000);                       
  digitalWrite(pinLED, LOW);    
  delay(1000);                      
}