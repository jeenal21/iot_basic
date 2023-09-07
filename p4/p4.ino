 int led=2;
int swt=3;

void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
pinMode(swt,INPUT_PULLUP);
}

void loop() {
if(digitalRead(swt)==LOW)
{
  digitalWrite(led,HIGH);
}
else
{
    digitalWrite(led,LOW);
}
  

}
