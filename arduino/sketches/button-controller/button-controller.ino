#define LEFT_BUTTON 2
#define LEFT_LED 11

void setup() {
  // put your setup code here, to run once:  
  pinMode(LEFT_BUTTON, INPUT);
  pinMode(LEFT_LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int leftValue = digitalRead(LEFT_BUTTON);
  
  if(leftValue == LOW){
    digitalWrite(LEFT_LED, LOW);
  }
  else{
    digitalWrite(LEFT_LED, HIGH);
  }
  delay(100);
}
