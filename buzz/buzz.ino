//buzz withvolume control the black background
//volume key must be the GND and 5v close to each other and the middle line must be in A0-5
// buzz must be in GND with 8or any others

int potVal;
int buzzPin = 8;
int potPin = A0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(buzzPin, OUTPUT);
pinMode(potPin, INPUT);
}


void loop() {
  // put your main code here, to run repeatedly:

potVal=analogRead(potPin);
Serial.println(potVal);
while (potVal > 1000){
  digitalWrite(buzzPin, HIGH);
  potVal=analogRead(potPin);
  Serial.println(potVal); // to make the counter after the sound comes faster 
}
digitalWrite(buzzPin, LOW);
}
