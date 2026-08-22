void setup()
{
  pinMode(7,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(4,OUTPUT);
}
void loop()
{
  digitalWrite(7,HIGH);
  delay(3000);
  digitalWrite(7,LOW);
  delay(1000);
  digitalWrite(10,HIGH);
  delay(3000);
  digitalWrite(10,LOW);
  delay(1000);
  digitalWrite(4,HIGH);
  delay(3000);
  digitalWrite(4,LOW);
  delay(1000);
}

