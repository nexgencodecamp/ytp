// Create a variable called button and set it to 2 which means pin 2 on the Arduino
int button = 2;

void setup() {
  // Setup the serial monitor
  Serial.begin(9600);  

  // Make 'button' an input pin
  
}

void loop() {
  // Read the value of button
  int buttonValue = digitalRead(button);

  // Write the value of button to the serial monitor
  Serial.println(buttonValue);

  // Wait for half a second
  
}
