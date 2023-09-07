


#define BLYNK_TEMPLATE_ID "TMPL3pgw5npd"
#define BLYNK_DEVICE_NAME "led"
#define BLYNK_AUTH_TOKEN "ZLoQSbJG9VKzvzEv3mIGucUwLssKtAaB"
 
// Comment this out to disable prints and save space
#define BLYNK_PRINT Serial
 
 
#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>
 
char auth[] = BLYNK_AUTH_TOKEN;
 
// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "Harsh";
char pass[] = "harsh0911";
 
BlynkTimer timer;
 
 
 
int pot=26;
BLYNK_WRITE(V0)
{
  int pinValue=param.asInt();
  digitalWrite(25,pinValue);
  }
void setup()
{
    pinMode(pot,INPUT);
  pinMode(25,OUTPUT);
  // Debug console
  Serial.begin(115200);
 
  Blynk.begin(auth, ssid, pass);
 
}
 
void loop()
{
  Blynk.run();
   int potvalue=analogRead(36);
  Blynk.virtualWrite(V1,potvalue);
}
