int button = 2;
int led = 7;

void setup() {
  Serial.begin(9600);  
  pinMode(button, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  int buttonValue = digitalRead(button);

  Serial.println(buttonValue);

  if(buttonValue == 1){
    digitalWrite(led, HIGH);
  }
  else{
    digitalWrite(led, LOW);
  }
  
  delay(500);
  
  
}
