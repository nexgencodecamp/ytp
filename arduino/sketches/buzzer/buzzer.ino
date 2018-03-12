
const int buttonPin = 2; 

// the setup function runs once when you press reset or power the board
void setup() {
  
  pinMode(buttonPin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(buttonPin, HIGH);   // since the circuit is not complete till the button is pressed down this can always be on high
}
