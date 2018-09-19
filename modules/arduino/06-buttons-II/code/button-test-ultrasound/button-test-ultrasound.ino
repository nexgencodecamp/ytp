int button = 2;
int led = 7;

const int echoPin = 3;
const int trigPin = 4;

void setup() {
  Serial.begin(9600);  
  
  pinMode(button, INPUT);
  pinMode(led, OUTPUT);

  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
}

void loop() {
  int buttonValue = digitalRead(button);
  
  // Get the distance currently measured by the Ultrasonic sensor
  int distance = getDistance();
  
  Serial.print("Button: ");
  Serial.println(buttonValue);
  Serial.print("Distance: ");
  Serial.println(distance);

  if(distance < 100){
    digitalWrite(led, HIGH);
  }
  else{
    digitalWrite(led, LOW);
  }
  delay(500);
}

int getDistance() {
  // Clears the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  // Reads the echoPin, returns the sound wave travel time in microseconds
  long duration = pulseIn(echoPin, HIGH);
  
  // Calculating the distance
  int distance = duration*0.034/2;
  
  // Prints the distance on the Serial Monitor
  Serial.print("Distance: ");
  Serial.println(distance);

  // Return the distance
  return distance;
}
