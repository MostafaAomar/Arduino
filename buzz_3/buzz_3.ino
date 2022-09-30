
int buzzPin=8;
int buzzT1=1;
int buzzT2=5;
void setup() {
  // put your setup code here, to run once:
pinMode(buzzPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(buzzPin, HIGH);
delayMicroseconds(buzzT2);
digitalWrite(buzzPin, LOW);
delayMicroseconds(buzzT2);

}
