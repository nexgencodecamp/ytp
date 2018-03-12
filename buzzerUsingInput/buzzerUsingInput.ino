


const int buttonPin = 2;     
const int buzzerPin =  3;     

int buttonState = 0;   

void setup() {
  //initialise the pins you will be using
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // buzzer makes noise
    digitalWrite(buzzerPin, HIGH);
  } else {
    // buzzer doesnt make noise
    digitalWrite(buzzerPin, LOW);
  }
}
