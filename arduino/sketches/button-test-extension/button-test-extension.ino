/*******************************************************************************************************************************
 
      Week 7 - Extension Activity - Connect an LED that turns on when you press the button
      
      WHAT TO DO:
      Build the CIRCUIT first then the CODE. 
      Once complete, verify your code by compiling it. If it compiles, upload it to your Arduino and test it.
      
      HOW TO DO IT:
      
      Build the Circuit
      1. Connect a jumper from pin 12 to anywhere on the breadboard
      2. Connect an LED to the jumper
      3. Connect a resistor to the LED
      4. Connect a jumper from the resistor to the ground (GND) rail
      
      Write the Code
      1. Open the sketch ‘button-test-extension’
      2. Create a variable called 'LED' and set it to pin 12
      3. Make 'LED' an output pin in the setup() function
      4. In the loop() function there is an 'if' statement.
         In the 'if' statement, if buttonValue is LOW then write a value of LOW to LED, otherwise write a value of HIGH to LED
      
 ********************************************************************************************************************************/

// Create a variable called button and set it to 2 which means pin 2 on the Arduino
int button = 2;

// Create a variable called 'LED' and set it to pin 12


void setup() {
  // Setup the serial monitor
  Serial.begin(9600);

  // Make 'button' an input pin
  pinMode(button, INPUT);

  // Make 'LED' an output pin

}

void loop() {
  // Read the value of button
  int buttonValue = digitalRead(button);

  // In the 'if' statement below. If buttonValue is LOW then
  // write a value of LOW to LED
  // otherwise write a value of HIGH to LED
  
  if(buttonValue == LOW){
    // Write a value of LOW to the LED pin

  }
  else{
    // Write a value of HIGH to the LED pin
  
  }

  // Write the value of button to the serial monitor
  Serial.println(buttonValue);

  // Wait for one tenth of a second
  delay(100);
}
