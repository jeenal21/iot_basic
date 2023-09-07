int sensor=35;//musture and gas sensor
void setup() {
   pinMode(2,OUTPUT);
  pinMode(sensor,INPUT);
  Serial.begin(9600);
  }

void loop() {
 int x=analogRead(sensor);
Serial.println(x);
delay(1000);
if(x<2500)//if(x>3500)
{
  digitalWrite(2,LOW);
  }
  else
  {
  digitalWrite(2,LOW);
  }
  
}
