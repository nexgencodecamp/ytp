int button = 2;
int LED = 12;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  pinMode(button, INPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int buttonValue = digitalRead(button);

  if(buttonValue == LOW){
    // Write a value of LOW to the LED pin
    digitalWrite(LED, LOW);
  }
  else{
    // Write a value of HIGH to the LED pin
    digitalWrite(LED, HIGH);
  }
  
  Serial.println(buttonValue);
  
  delay(100);
}
