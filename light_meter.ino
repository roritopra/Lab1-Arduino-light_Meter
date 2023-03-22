// C++ code
//

int pinLED1 = 8;
int pinLED2 = 9;
int pinLED3 = 10;
int pinLED4 = 11;

int foto = A3;

int valorFoto = 0;

void setup()
{
  pinMode(pinLED1, OUTPUT);
  pinMode(pinLED2, OUTPUT);
  pinMode(pinLED3, OUTPUT);
  pinMode(pinLED4, OUTPUT);
  
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(pinLED1, LOW);
  digitalWrite(pinLED2, LOW);
  digitalWrite(pinLED3, LOW);
  digitalWrite(pinLED4, LOW);
  
  valorFoto = analogRead(foto);
  Serial.println(valorFoto);
  
  if (valorFoto > 242){
    digitalWrite(pinLED1, HIGH);
   } 
  if (valorFoto > 484){
    digitalWrite(pinLED2, HIGH);
   } 
  if (valorFoto > 726){
    digitalWrite(pinLED3, HIGH);
   } 
  if (valorFoto > 870){
    digitalWrite(pinLED4, HIGH);
   } 
  
  delay(200);
  
}
