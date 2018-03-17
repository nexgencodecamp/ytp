// Create a variable called button and set it to 2 which means pin 2 on the Arduino
int button = 2;

// Create a variable called 'LED' and set it to pin 12
int LED = 12;

void setup() {
  // Setup the serial monitor
  Serial.begin(9600);

  // Make 'button' an input pin
  pinMode(button, INPUT);

  // Make 'LED' and output pin
  pinMode(LED, OUTPUT);
}

void loop() {
  // Read the value of button
  int buttonValue = digitalRead(button);

  // In the 'if' statement below. If buttonValue is LOW then
  // write a value of LOW to LED
  // otherwise write a value of HIGH to LED
  
  if(buttonValue == LOW){
    // Write a value of LOW to the LED pin
    digitalWrite(LED, LOW);
  }
  else{
    // Write a value of HIGH to the LED pin
    digitalWrite(LED, HIGH);
  }

  // Write the value of button to the serial monitor
  Serial.println(buttonValue);

  // Wait for one tenth of a second
  delay(100);
}
