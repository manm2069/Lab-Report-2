/*
  PB value displayed on serial monitor and blink (without using Delay)

  This program combines the program that displays the value of a pin in the serial monitor, and the program which turns on and off the built in LED in intervals of 1 second.

  This program makes use of int, unsigned long, const long, Serial.begin, pinMode, Serial.print, Serial.println, if, else, and digitalWrite.
*/

// Variables
int ledState = LOW; // Creates a variable called "ledState" and set its value to LOW voltage.
unsigned long previousMillis = 0; // Create an extended size variable for number storage called "previousMillis" and set its value to 0.
const long interval = 1000; // Creates a constant extended size variable called "interval" and set its value to 1000

// The setup function runs once when you press reset or power the board.
void setup() {
  Serial.begin(9600); // Set the data rate in bits per second to 9600 for serial data transmission.
  pinMode(12, INPUT_PULLUP); // This sets pin 12 as INPUT.
  pinMode(13, OUTPUT); // This sets the led built in the Arduino as OUTPUT.
}

// The loop function runs over and over again forever.
void loop() {
  Serial.print("The PB Value is "); // This prints in the serial monitor the message "The PB Value is ".
  Serial.println(digitalRead(12)); // This prints in the serial monitor the value of the value read in pin 12.
 
  unsigned long currentMillis = millis(); // Creates an extended size variable for number storage called "currentMillis" and set its value to the milliseconds past since the Arduino was turned on.
  if (currentMillis - previousMillis >= interval) { // Detects if the difference of the variables "currentMillis" and "previousMillis" are greater than the variable "interval".
    previousMillis = currentMillis; // Sets the value of the variable "currentMillis" to the value of the variable "previousMillis".
    if (ledState == LOW) { // Detects if the variable "ledState" is set to LOW voltage.
      ledState = HIGH; // Sets the value of the variable "ledState" to HIGH voltage.
    } else { // Detects if the variable "ledState" is set to HIGH voltage.
      ledState = LOW; // Sets the value of the variable "ledState" to LOW voltage.
    }
    digitalWrite(13, ledState); // Sets the value of the LED_BUILTIN to the voltage of the variable "ledState".
  }                     
}
