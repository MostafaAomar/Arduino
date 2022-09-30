//control the led high and low from the volume

int potPin = A1; // goes to middle leg of volume and the others go to 5v and GND
int gPin = 6; //goes to the transistor then to the long leg of led...... whether the short leg of the led goes to the GND
int potVal;
float ledVal;

void setup() {
  // put your setup code here, to run once:
pinMode(potPin, INPUT);
pinMode(gPin, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
potVal=analogRead(potPin);
ledVal=(255./1023.)*potVal;
analogWrite(gPin, ledVal);
Serial.println(ledVal);
}
