/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.
  
  Delay works by pausing the programm for a certain time
  This is called blocking. Check the Serial Output to see how the delay slows down 
  the operation for the counter variable which counts the amounts of programm loops the arduino has done. 
*/

int counter = 0; // variable to hold the number of programm loops the arduino has done
int ledPin = 13;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(ledPin, OUTPUT);

  Serial.begin(9600); // Start serial communication: For us to be able to read values from the Arduino in Serial Monitor or in other programms
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(ledPin, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(ledPin, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);                      // wait for a second

  counter ++; // same operation as if we would write counter = counter + 1;
  Serial.println(counter); // outputs a line per programm loop with the number of loops that have been done 
}
