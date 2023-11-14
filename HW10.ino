unsigned long WallSeconds; 
void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);
    pinMode(2, OUTPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:
  unsigned long currentMillis = millis();
  WallSeconds = currentMillis / 1000;
  digitalWrite(2, HIGH); 
  delay(100); 
  digitalWrite(2, LOW); 
  delay(100); 
}
