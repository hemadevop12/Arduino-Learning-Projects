int light;
int threshold = 343;

void setup()
{
  pinMode(7, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  light = analogRead(A0);
  Serial.println(light);

  if (light < threshold)
  {
    digitalWrite(7, HIGH);
  }
  else
  {
    digitalWrite(7, LOW);
  }
}
