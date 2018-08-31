void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  /**
   * READ THIS FIRST !!!!
   * 
   * Everything depends on the following line of code.
   * This is where you call the function 'makeBreakfast'
   * You decide what to make, then call it as per below.
   * I have called it with all the trimmings, but you don't have to.
   */
  makeBreakfast(1,1,1,1);
}

void loop() {
  // put your main code here, to run repeatedly:

}

void makeBreakfast(int a, int b, int c, int d) {
   Serial.println("Starting your order....!");
   if(a == 1){
      makeCoffee();
   }
   if(b == 1){
      makeScrambledEggs();
   }
   if(c == 1){
      makeCheeriosCereal();
   }
   if(d == 1){
      makeOrangeJuice();
   }

   Serial.println();
   Serial.println("Your order is ready !!");
}

void makeCoffee(){
  // Make coffee !  
  Serial.println("Making coffee...");
  delay(60000);
  Serial.println("Finished making coffee");
}

void makeScrambledEggs(){
  // Make scrambled eggs !  
  Serial.println("Making scrambled eggs...");
  delay(120000);
  Serial.println("Finished making scrambled eggs");
}

void makeCheeriosCereal(){
  // Make Cheerios !  
  Serial.println("Making Cheerios!");
  delay(30000);
  Serial.println("Finished making Cheerios");
}
  
void makeOrangeJuice(){
  // Make Orange Juice !  
  Serial.println("Making Orange Juice");
  delay(50000);
  Serial.println("Finished making orange juice");
}
 

