unsigned long WallSeconds; 
void setup() {
  // put your setup code here, to run once:
    pinMode(2, OUTPUT);
    pinMode(3, OUTPUT); 
    pinMode(4, OUTPUT); 
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT); 
    pinMode(7, OUTPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:
  unsigned long currentMillis = millis();
  WallSeconds = (currentMillis / 1000) % 61;
  int p2v = (millis()/1000) % 2; 
  int p3v = (millis()/5000) % 2;
  int p4v = (millis()/10000) % 2;  
  digitalWrite(2, p2v); 
  digitalWrite(3, p3v); 
  digitalWrite(4, p4v); 

  if(WallSeconds>0 && WallSeconds<20)
  {
    digitalWrite(5, 1);
    digitalWrite(6, 0);  
    digitalWrite(7, 0); 
  }
   else if(WallSeconds>20 && WallSeconds<40)
  {
    digitalWrite(5, 0);
    digitalWrite(6, 1);  
    digitalWrite(7, 0); 
  }
 else 
  {
    digitalWrite(5, 0);
    digitalWrite(6, 0);  
    digitalWrite(7, 1); 
  }

}
