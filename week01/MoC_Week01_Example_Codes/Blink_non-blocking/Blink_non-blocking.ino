// Non-blocking Blink Example
// --------------------------
// Uses millis() for timing instead of delay()
// LED toggles every 1000 ms (1 second)

int ledPin = 13;      // Built-in LED on most Arduino boards
unsigned long previousMillis = 0;  // Stores the last time the LED was toggled
unsigned long interval = 1000; // Interval at which to blink (milliseconds)
bool ledState = false;  // Tracks the current LED state

int counter = 0; // variable to hold the number of programm loops the arduino has done

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  unsigned long currentMillis = millis();  // Get current time

  // Check if the interval has elapsed
  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;  // Save last toggle time
    ledState = !ledState;            // Toggle LED state
    digitalWrite(ledPin, ledState);  // Apply new state
  }

  // You can do other tasks here without blocking
  // e.g., read sensors, handle serial, etc.
  counter++;
  Serial.println(counter);

}
