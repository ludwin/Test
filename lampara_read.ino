int lampara = 10; 
int state = 0; 
 
void setup() {
    pinMode(lampara, OUTPUT);   
    digitalWrite(lampara, LOW); 
    Serial.begin(9600);
}
 
void loop() {

  if(Serial.available()){
       state = Serial.read();
       
       switch (state)
       {
       case 'L':
       digitalWrite(lampara, LOW);
       Serial.println("LED: OFF");
       break;
       
       case 'H':
       digitalWrite(lampara, HIGH);
       Serial.println("LED: ON");
       break;
       
       default:
       Serial.println("Opcion no valida");
       break;
       
       
       }
  } 
 
 
}
