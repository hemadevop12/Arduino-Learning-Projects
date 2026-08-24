int State;
int City;
void setup()
{
  pinMode(4,INPUT);
  pinMode(12,INPUT);
  pinMode(2,OUTPUT);
  Serial.begin(9600);

}
void loop()
{
  State =digitalRead(4);
  City =digitalRead(12);
  if (State==HIGH){
    digitalWrite(2,HIGH);
    Serial.println("HIGH");
  }
  if (City ==HIGH)
  {
    digitalWrite(2,LOW);
    Serial.println("HIGH");
  }
 
}
