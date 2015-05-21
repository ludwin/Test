int ledPin = 13; // usamos un pin de salida al LED
int state = 0; // Variable lectrura serial
 
void setup() {
    pinMode(ledPin, OUTPUT);   //Declara pin de Salida
    digitalWrite(ledPin, LOW); //Normalmente Apagado
    Serial.begin(9600);
}
 
void loop() {
 //si el modulo a manda dato, guardarlo en estado.
  if(Serial.available()){
       state = Serial.read();
       
       switch (state)
       {
       case 'L':
       digitalWrite(ledPin, LOW);
       Serial.println("LED: OFF");
       break;
       
       case 'H':
       digitalWrite(ledPin, HIGH);
       Serial.println("LED: ON");
       break;
       
       default:
       Serial.println("Opcion no valida");
       break;
       
       
       }
  } 
 
 
}
