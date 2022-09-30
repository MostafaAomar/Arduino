int redPin=8;
int buzzPin=2;
int bushbtn1= 9;
int bushbtn2=12;
int dt=250;
int btnVal1;
int btnVal2;
int LEDbright=0;
void setup() {
  // put your setup code here, to run once:
pinMode(redPin, OUTPUT);
pinMode(bushbtn1, INPUT);
pinMode(bushbtn2, INPUT);
pinMode(buzzPin, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
btnVal1=digitalRead(bushbtn1);
btnVal2=digitalRead(bushbtn2);
Serial.print("Button 1= ");
Serial.println(btnVal1);
Serial.print(", ");

Serial.print("Button 2= ");
Serial.print(btnVal2);
Serial.print(", ");
delay(dt);

if (btnVal1==0){
  LEDbright=LEDbright+5;
  
}
if (btnVal2 ==0){
  LEDbright=LEDbright -5;
}
Serial.println(LEDbright); // just to debug
if (LEDbright>255){
  LEDbright=255;
  digitalWrite(buzzPin, HIGH);
  delay(dt);
  digitalWrite(buzzPin, LOW);
  Serial.println("buzz High");
}
if (LEDbright<0){
  LEDbright=0;
  digitalWrite(buzzPin, HIGH);
  delay(dt);
  digitalWrite(buzzPin, LOW);
  Serial.println("buzz Low");
}
analogWrite(redPin, LEDbright);
}
