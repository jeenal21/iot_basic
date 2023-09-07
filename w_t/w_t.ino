int s1=35;
void setup() {
  // water quality
pinMode(s1,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int x=analogRead(s1);
Serial.println(x);
delay(1000);
}
