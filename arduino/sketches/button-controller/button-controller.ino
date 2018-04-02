#define LEFT_BUTTON 2
#define RIGHT_BUTTON 3
#define UP_BUTTON 4
#define DOWN_BUTTON 5

#define LEFT_LED 9
#define RIGHT_LED 8
#define UP_LED 11
#define DOWN_LED 10


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  pinMode(LEFT_BUTTON, INPUT);
  pinMode(RIGHT_BUTTON, INPUT);
  pinMode(UP_BUTTON, INPUT);
  pinMode(DOWN_BUTTON, INPUT);

  pinMode(LEFT_LED, OUTPUT);
  pinMode(RIGHT_LED, OUTPUT);
  pinMode(UP_LED, OUTPUT);
  pinMode(DOWN_LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int leftValue = digitalRead(LEFT_BUTTON);
  Serial.print("LEFT: ");
  Serial.println(leftValue);
  
  int rightValue = digitalRead(RIGHT_BUTTON);
  int upValue = digitalRead(UP_BUTTON);
  int downValue = digitalRead(DOWN_BUTTON);
  
  if(leftValue == LOW){
    digitalWrite(LEFT_LED, LOW);
  }
  else{
    digitalWrite(LEFT_LED, HIGH);
  }
  if(rightValue == LOW){
    digitalWrite(RIGHT_LED, LOW);
  }
  else{
    digitalWrite(RIGHT_LED, HIGH);
  }
  if(upValue == LOW){
    digitalWrite(UP_LED, LOW);
  }
  else{
    digitalWrite(UP_LED, HIGH);
  }
  if(downValue == LOW){
    digitalWrite(DOWN_LED, LOW);
  }
  else{
    digitalWrite(DOWN_LED, HIGH);
  }

  delay(100);
}
