/*
  Connect potentiometer and display bit-value and voltage value on serial monitor

  This program reads the bit value of the value of analog pin AO and converts it to a voltage, both values are then displayed on the serial monitor.

  This program makes use of int, Serial.begin, analogRead, Serial.print, float, and Serial.println.
*/

// Variables
int analogPin = A0; // Creates a variable called "analogPin" and set it to correspond to the analog pin A0.
int val = 0; // Creates a variable called "val" and sets its value to 0.

// The setup function runs once when you press reset or power the board.
void setup() {
  Serial.begin(9600); // Set the data rate in bits per second to 9600 for serial data transmission.
}

// The loop function runs over and over again forever.
void loop() {
  val = analogRead(analogPin); // Sets the value of the variable "val" into the read value of analog pin A0.
  Serial.print("Bit Value: "); // Prints in the serial monitor the statement "Bit Value: ".
  Serial.print(val); // Prints in the serial monitor the value of the variable "val".

  float volt = val/204.6; // Creates a variable, that can be set as a number which has decimal points, called "volt" and sets its value to the quotient of the variable "val" and 204.6.

  Serial.print(" Voltage: "); // Prints in the serial monitor the statement " Voltage: ".
  Serial.println(volt); // Prints in the serial monitor the value of the variable "volt".
}