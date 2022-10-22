/*
  Arduino Controlling DC Motor by Relay

  This program switches on the relay to either turn off or turn on the DC motor it is connected to.

  This program makes use of int, pinMode, digitalWrite, and delay.
*/

// Variables
int time_wait = 5000; // Creates the variable: "time_wait" and gives it a value of 5000.

// The setup function runs once when you press reset or power the board.
void setup() {
  pinMode(13, OUTPUT); // This sets the pin 13 as output.
}

// The loop function runs over and over again forever.
void loop() {
  digitalWrite(13, HIGH); // This turns on the relay (The voltage is HIGH).
  delay(time_wait); // Waits for time_wait milliseconds (5000 milliseconds).
  digitalWrite(13, LOW); // This turns off the relay (The voltage is LOW). 
  delay(time_wait);
}
