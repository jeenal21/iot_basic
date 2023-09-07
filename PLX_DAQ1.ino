float sensor;         //variable to hold the voltage form A0
void setup() {
  Serial.begin(128000);               //Fastest baudrate
  Serial.println("CLEARDATA");        //This string is defined as a 
   pinMode(35,INPUT);                                   // commmand for the Excel VBA 
                                      // to clear all the rows and columns
  Serial.println("LABEL,Computer Time,Time (Milli Sec.),Volt");  
                                      //LABEL command creates label for 
                                      // columns in the first row with bold font
}
void loop() {
  int milli_time = millis();
  sensor = analogRead(35);
  Serial.print("DATA,TIME,");
  Serial.print(milli_time);
  Serial.print(",");
  Serial.println(sensor);
    
  delay(100);                    //Take samples every one second
}
