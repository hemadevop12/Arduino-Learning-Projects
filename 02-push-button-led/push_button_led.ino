int button=2;

int LED=12;

int State;



void setup()

{

  pinMode(button,INPUT);

  pinMode(LED,OUTPUT);

  Serial.begin(9600);

}

void loop()

{

  int State = digitalRead(button);

  if (State == HIGH){
    Serial.println("LED HIGH");

    digitalWrite(LED,HIGH);

  }

  else{
    
    Serial.println("LED LOW");

    digitalWrite(LED,LOW);

  }

}


