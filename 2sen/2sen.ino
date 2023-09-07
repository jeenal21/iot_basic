int led1=2;
int led2=4;
int s1=15;
int s2=5;
void setup() {
  // put your setup code here, to run once:
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(s1,INPUT);
pinMode(s2,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(s1)==LOW)
{
  digitalWrite(led1,HIGH);
  digitalWrite(led2,LOW);
  Serial.println("Sensor 1 detected");  
  }
  else if(digitalRead(s2)==LOW)
  {
    digitalWrite(led1,LOW);
    digitalWrite(led2,HIGH); 
    Serial.println("Sensor 2 detected");
  }
   else
   {
    digitalWrite(led1,LOW);
    digitalWrite(led1,LOW);
    Serial.println("No one sensor detected");
    }
}
