// Photoresistors to check the light if its high then the number will be more and more 

int lightPin = A0; // goes to both of the photoresistor and the resister
int lightVal;
int redPin = 8;
int greenPin=9;
int dt=250;
void setup() {
  // put your setup code here, to run once:
pinMode(lightPin, INPUT);
pinMode(redPin, OUTPUT);
pinMode(greenPin, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
lightVal = analogRead(lightPin);
Serial.println(lightVal);
delay(dt);
if (lightVal < 350){
  digitalWrite(greenPin, HIGH);
  digitalWrite(redPin, LOW); 
}
if (lightVal > 350){
  digitalWrite(greenPin, LOW);
  digitalWrite(redPin, HIGH); 
}
}
