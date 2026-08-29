int Po_Read;
int brightness;
void setup()
{
  Serial.begin(9600);

}

void loop()
{
Po_Read = analogRead(A0);
brightness =map(Po_Read,0,1023,0,255);
analogWrite(3,brightness);
Serial.println(Po_Read);
}
