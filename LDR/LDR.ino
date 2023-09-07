int s1=35;
void setup() {
  // put your setup code here, to run once:
pinMode(s1,INPUT_PULLUP);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int x=analogRead(s1);
Serial.println(x);
delay(10009);
}
