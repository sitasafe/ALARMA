int ledPin1 = 13; // usamos un pin de salida al LED
int ledPin2 = 12;
int ledPin3 = 11;
int pir = 9;
int state = 0; // Variable lectura dato serial
int bandera=0;
void setup() {
  pinMode(ledPin1, OUTPUT); //Declara pin de Salida
  digitalWrite(ledPin1, LOW); //Normalmente Apagado
  pinMode(ledPin2, OUTPUT); //Declara pin de Salida
  digitalWrite(ledPin2, LOW); //Normalmente Apagado
  pinMode(ledPin3, OUTPUT); //Declara pin de Salida
  digitalWrite(ledPin3, LOW); //Normalmente Apagado
  pinMode(pir,INPUT);

  
  Serial.begin(9600); 
  
  // put your setup code here, to run once:

}

void loop() {
  if(Serial.available() > 0){
    state = Serial.read();
  }
  if(state == '1' ) {
  if(digitalRead(pir)== HIGH){
    digitalWrite(ledPin1, HIGH);

    delay(3000);
  }
    state = 0;
  }
   if(state == '0' ) 
   {
    digitalWrite(ledPin1, LOW);
   
    state = 0;

   }

      if(state == '2' ) {
    digitalWrite(ledPin2, HIGH);

    state = 0;
  }
   if(state == '3' ) 
   {
    digitalWrite(ledPin2, LOW);
   
    state = 0;

   }

      if(state == '4' ) {
    digitalWrite(ledPin3, HIGH);

    state = 0;
  }
   if(state == '5' ) 
   {
    digitalWrite(ledPin3, LOW);
   
    state = 0;
}

   
  // put your main code here, to run repeatedly:
}
