

int cm =0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  cm =0.01723 * readUlrasonicDistance(7,7);
  Serial.print(cm);
  Serial.println("cm");
  delay(100);
}
long readUlrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin,INPUT);
  return pulseIn(echoPin, HIGH);
}
