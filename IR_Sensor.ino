#define sensor A0 

void setup() {
  Serial.begin(9600); // start the serial port
}

void loop() {
  

  float volts = analogRead(sensor)*0.0048828125;  // value from sensor * (5/1024)
  int distance = 13*pow(volts, -1); 
  delay(1000); // slow down serial port 
  
  if (distance <= 30){
    Serial.println(distance);  
  }
}
