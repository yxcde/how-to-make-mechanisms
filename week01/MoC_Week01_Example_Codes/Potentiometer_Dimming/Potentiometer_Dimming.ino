// Solution for controlling BRIGHTNESS of an LED (PWM)

int ledPin = 13;
int potPin = 26; // Analog capable pin

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(potPin, INPUT);
  // Analog input pins don't strictly need pinMode declaration, 
  // but good practice anyways

}

void loop() {
  // Read the potentiometer (gives a number between 0 and 1023)
  int sensorValue = analogRead(potPin);
  
  // Map the 10-bit analog read (0-1023) to 8-bit PWM (0-255)
  int brightness = map(sensorValue, 0, 1023, 0, 255);
  
  // analogWrite sends a rapid pulse (PWM) to fade the LED
  analogWrite(ledPin, brightness); 
  
  // Tiny delay to keep the reading stable
  delay(10); 
}