/*
  RGB Light Chaser

  Makes an RGB LED switch through multiple colors.

  This program makes use of int, pinMode, digitalWrite, and delay.
*/

// Variables:
int time_wait = 500; // This sets the variable "time_wait" as a variable with the value of 500.

// The setup function runs once when you press reset or power the board.
void setup() {
  pinMode(8, OUTPUT); // This sets pin 8 as an output. The pin of the RGB this is connected is Blue.
  pinMode(9, OUTPUT); // This sets pin 9 as an output. The pin of the RGB this is connected is Green.
  pinMode(11, OUTPUT); // This sets pin 11 as an output. The pin of the RGB this is connected is Red
}

// Blue + Red = Purple
// Green + Red = Yellow
// Blue + Green = Blue Green

// The loop function runs over and over again forever.
void loop() {
  // None
  digitalWrite(8, LOW); // This turns off pin 8 (LOW is the voltage).
  digitalWrite(9, LOW); // This turns off pin 9 (LOW is the voltage).
  digitalWrite(11, LOW); // This turns off pin 11 (LOW is the voltage).
  delay(time_wait); // This makes the program wait for time_wait milliseconds (500 milliseconds).
  // Red
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(11, HIGH); // This turns on pin 11 (HIGH is the voltage).
  delay(time_wait);
  // Green
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH); // This turns on pin 9 (HIGH is the voltage).
  digitalWrite(11, LOW);
  delay(time_wait);
  // Blue
  digitalWrite(8, HIGH); // This turns on pin 8 (HIGH is the voltage).
  digitalWrite(9, LOW);
  digitalWrite(11, LOW);
  delay(time_wait);
  // Purple
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(11, HIGH);
  delay(time_wait);
  // Yellow
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(11, HIGH);
  delay(time_wait);
  // Blue Green
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(11, LOW);
  delay(time_wait);
  // White
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(11, HIGH);
  delay(time_wait);
}
