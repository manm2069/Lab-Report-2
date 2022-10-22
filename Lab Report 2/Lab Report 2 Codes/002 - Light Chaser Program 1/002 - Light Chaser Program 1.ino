/*
  Light Chaser Program 1

  This program makes it so the five external LEDs connected to the Arduino light up in a repeating sequence from left to right.

  The program makes use of int, pinMode, digitalWrite, and delay.
*/

// The setup function runs once when you press reset or power the board.
int t = 250; // Set "t" as variable with a value of 250.

void setup() {
  pinMode(12, OUTPUT); // Initialize pin 12 as output.
  pinMode(11, OUTPUT); // Initialize pin 11 as output.
  pinMode(10, OUTPUT); // Initialize pin 10 as output.
  pinMode(9, OUTPUT); // Initialize pin 9 as output.
  pinMode(8, OUTPUT); // Initialize pin 8 as output.
}

// The loop function runs over and over again forever.
void loop() {
  digitalWrite(8, LOW); // Turn the pin 8 off (LOW is the voltage level).
  digitalWrite(12, HIGH); // Turn the pin 12 on (HIGH is the voltage level).
  delay(t); // Wait for t milliseconds (250 milliseconds).
  digitalWrite(12, LOW); // Turn the pin 12 off (LOW is the voltage level).
  digitalWrite(11, HIGH); // Turn the pin 11 on (HIGH is the voltage level).
  delay(t);
  digitalWrite(11, LOW); // Turn the pin 11 off (LOW is the voltage level).
  digitalWrite(10, HIGH); // Turn the pin 10 on (HIGH is the voltage level).
  delay(t);
  digitalWrite(10, LOW); // Turn the pin 10 off (LOW is the voltage level).
  digitalWrite(9, HIGH); // Turn the pin 9 on (HIGH is the voltage level).
  delay(t);
  digitalWrite(9, LOW); // Turn the pin 9 off (LOW is the voltage level).
  digitalWrite(8, HIGH); // Turn the pin 8 on (HIGH is the voltage level).
  delay(t);
}
