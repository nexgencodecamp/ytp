/*----------------------------------------------------------------*/
/*                                                                */
/*                   ARDUINO TUTORIAL PROGRAM                     */
/* note: this program is for syntax example only, it will not run */
/*----------------------------------------------------------------*/

//syntax:
//Any line that begins with "//" is a comment and is ignored by the 
//computer.
/* Also a multi-line comment can be used. A multi-line comment begins 
with a "/*" and the end is */
//Curly brackets are used to define when code begins and ends: {code}
//EVERY LINE OF CODE MUST END WITH A SEMICOLON ;  

//-----------------------------------------------------------------

//Basic program structure:
//Each program must have a "setup" method and a "loop" method
//They are set up as follows:

//setup:
void setup() 
{
 //code to be run once at startup goes here 
}

//loop:
void loop() 
{
  //Code to be run again and again in a repeat loop goes here
}

//----------------------------------------------------------------
//Set up variables:
int myInt = 0;
int myOtherInt = 0;

//Could also be written as:
int myInt, myOtherInt = 0;

// Could also be given any int value:
int myInt = 1234;

//----------------------------------------------------------------

//Math operations 
// To add two INTs
int myThirdInt = myInt + myOtherInt;

// To subtract:
int myThirdInt = myInt - myOtherInt;

// To multiply:
int myThirdInt = myInt * myOtherInt;

//To divide:
int myThirdInt = myInt / myOtherInt;

//Get the remainder when a number is divided by another:
int myThirdInt = myInt % myOtherInt;

//Assign a value: just use an "=" 

//------------------------------------------------------------------

//Comparisons and control structure:

//Comparison Operators
/*  The following are comparison operators:
    Operator              Function
    ==                    Check if something is equal to. 
    !=                    Check if something is not equal to.
    >                     Check if something is greater than.
    <                     Check if something is less than.
*/

//Control Structure:
//if conditional statement:

if(myInt != myOtherInt)
{
//if the condition is true, do this:
myInt = myInt + 1;
  
}
//exceptions
else 
{
  
}

//for conditional statement:
for(int i = 0; i < 15; i++)
{
 //will run any code placed here 15 times 
}

//---------------------------------------------------------------
//Digital output control:

//Set pin mode
pinMode(PinNumber, PinMode);

//Digital Write:
digitalWrite(PinNumber, Value);

//Digital Read:
int digitalRead(PinNumber);

//---------------------------------------------------------------
//Analog output control:

//Set up pin is same as digital pin set up

//Analog write:
analogWrite(PinNumber, Value);  //note: value is between 0 - 256

//Analog read:
analogRead(PinNumber);


/*-------------------------------------------------------------*/
/* For more help with arduino prgramming, see our website at   */
/* www.electronics123.com and also visit www.arduino.cc for    */
/* more example projects and programs.                         */
/*-------------------------------------------------------------*/

