

void setup() {
  // put your setup code here, to run once:
pinMode(2,OUTPUT);
pinMode(4,INPUT_PULLUP);
}

void loop() {
if(digitalRead(4)==LOW)
{
  digitalWrite(2,HIGH);
}
else
{
    digitalWrite(2,LOW);
}
  

}
