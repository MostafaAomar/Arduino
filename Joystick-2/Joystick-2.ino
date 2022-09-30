#include <Servo.h>
Servo Xservo;
Servo Yservo;

int Xpin=A0;
int Ypin=A1;
int Spin=8;
int XSpin=7;
int YSpin=9;
int buzzPin=5;
int WVx;
int WVy; //write value of y
int Xval;
int Yval;
int Sval;
int dt=2000;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(Xpin, INPUT);
pinMode(Ypin, INPUT);
pinMode(Spin, INPUT);
pinMode(XSpin, OUTPUT);
pinMode(YSpin, OUTPUT);
pinMode(buzzPin, OUTPUT);

Xservo.attach(XSpin);
Yservo.attach(YSpin);


digitalWrite(Spin, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
Xval=analogRead(Xpin);
WVx=(180./1023.)*Xval; //read the angel of the servo
Yval=analogRead(Ypin);
WVy=(180./1023.)*Yval;
Sval=analogRead(Spin);


Xservo.write(WVx);
Yservo.write(WVy);

if (Sval ==0){
  digitalWrite(buzzPin, HIGH);
}
else{
  digitalWrite(buzzPin, LOW);
}
delay(dt);
Serial.print("X value =  ");
Serial.print(Xval);
Serial.print(" Y value= ");
Serial.print(Yval);
Serial.print(" S value= ");
Serial.println(Sval);
}
