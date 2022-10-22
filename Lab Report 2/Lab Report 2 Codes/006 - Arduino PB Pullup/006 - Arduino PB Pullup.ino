/*
  Arduino PB Pullup

  This program displays in the serial monitor the value that is put into the Arduino while making use of the pullup resistor.

  This program makes use of int, Serial.begin, pinmode, Serial.print, and Serial.println.
*/

// Variables
int sensor; // Creates a variable called "sensor".

// The setup function runs once when you press reset or power the board.
void setup() {
  Serial.begin(9600); // Set the data rate in bits per second to 9600 for serial data transmission.
  pinMode(13,INPUT); // This sets pin 13 as INPUT.
}

// The loop function runs over and over again forever.
void loop() {
  sensor = digitalRead(13); // This reads the value of pin 13 and puts the value in the "sensor" variable.
  Serial.print("The PB Value is "); // This prints in the serial monitor the message "The PB Value is ".
  Serial.println(sensor); // This prints in the serial monitor the value of the "sensor" variable.
}
