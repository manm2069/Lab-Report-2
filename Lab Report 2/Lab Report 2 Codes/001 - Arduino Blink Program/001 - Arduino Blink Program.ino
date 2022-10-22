/*
  Arduino Blink Program

  This program makes it so the internal LED of the Arduino is turned on for 1 second, and is turned off for 1 second.

  The program makes use of pinMode, digitalWrite, and delay.
*/

// The setup function runs once when you press reset or power the board.
void setup() {
  // Initialize digital pin LED_BUILTIN as an output.
  pinMode(13, OUTPUT);
}

// The loop function runs over and over again forever.
void loop() {
  digitalWrite(13, HIGH);   // Turn the LED on (HIGH is the voltage level).
  delay(1000);                       // Wait for a second (1000 milliseconds).
  digitalWrite(13, LOW);    // Turn the LED off (LOW is the voltage level).
  delay(1000);                       // Wait for a second (1000 milliseconds).
}
