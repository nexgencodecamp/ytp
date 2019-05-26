#include <Servo.h>

#define BUTTON_1 2
#define BUTTON_2 3
#define BUTTON_3 4

#define LED_1 5
#define LED_2 6
#define LED_3 7

#define ULTRASONIC_ECHO 9
#define ULTRASONIC_TRIGGER 8

#define SERVO_PIN 10

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  pinMode(BUTTON_1, INPUT);
  pinMode(BUTTON_2, INPUT);
  pinMode(BUTTON_3, INPUT);

  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
  pinMode(LED_3, OUTPUT);
  
  pinMode(ULTRASONIC_ECHO, INPUT);
  pinMode(ULTRASONIC_TRIGGER, OUTPUT);

  myservo.attach(SERVO_PIN);
  myservo.write(pos); 
}

void loop() {
  // Read the button value for each button which tells us if pressed or not
  int button1Value = digitalRead(BUTTON_1);
  int button2Value = digitalRead(BUTTON_2);
  int button3Value = digitalRead(BUTTON_3);

  Serial.print("Buttons Values: ");
  Serial.print(button1Value);
  Serial.print(", ");
  Serial.print(button2Value);
  Serial.print(", ");
  Serial.print(button3Value);
  Serial.println();

  // Get the distance currently measured by the Ultrasonic sensor
  int distance = getDistance();
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println();
  Serial.println();

  if(distance < 10){
   digitalWrite(LED_3, HIGH); 
  }
  else{
    digitalWrite(LED_3, LOW);
  }
  
  if(button1Value == HIGH){
    digitalWrite(LED_1, HIGH);
  }
  else{
    digitalWrite(LED_1, LOW);
  }

  if(button2Value == HIGH){
    digitalWrite(LED_2, HIGH);
  }
  else{
    digitalWrite(LED_2, LOW);
  }

  if(button3Value == HIGH){
    for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
      myservo.write(pos);              // tell servo to go to position in variable 'pos'
      delay(15);                       // waits 15ms for the servo to reach the position
    }
  }
  else{
   myservo.write(pos);
  }

  delay(100);
}

int getDistance() {
  // Clears the trigPin
  digitalWrite(ULTRASONIC_TRIGGER, LOW);
  delayMicroseconds(2);

  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(ULTRASONIC_TRIGGER, HIGH);
  delayMicroseconds(10);
  digitalWrite(ULTRASONIC_TRIGGER, LOW);
  
  // Reads the echoPin, returns the sound wave travel time in microseconds
  long duration = pulseIn(ULTRASONIC_ECHO, HIGH);
  
  // Calculating the distance
  int distance = duration*0.034/2;
  
  // Prints the distance on the Serial Monitor
  //Serial.print("Distance: ");
  //Serial.println(distance);

  // Return the distance
  return distance;
}
