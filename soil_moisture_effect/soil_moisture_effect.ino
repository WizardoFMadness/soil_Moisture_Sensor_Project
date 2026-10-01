int dryair =930;
int waterValue = 260;
int Sensor_Value= A0;
 
int LedPin =8;

void setup()
{
  Serial.begin(9600);
  pinMode(LedPin,OUTPUT);
}

void loop()
{
  int rawair =  analogRead(Sensor_Value);
  float moisture_percentage = map(rawair, dryair, waterValue,0,100);

moisture_percentage = constrain(moisture_percentage, 0, 100);
  
  if(moisture_percentage > 50)
  {
    digitalWrite(LedPin,HIGH);
  }
  else
  {
    digitalWrite(LedPin,LOW);
  }
Serial.print(moisture_percentage),1;
Serial.print("%");
  delay(1000);
}



