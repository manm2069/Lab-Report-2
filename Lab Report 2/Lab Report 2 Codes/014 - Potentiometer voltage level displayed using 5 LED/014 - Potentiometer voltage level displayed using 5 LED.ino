/*
  Potentiometer voltage level displayed using 5 LED

  This program reads the bit value of the value of analog pin AO and converts it to a voltage, both values are then displayed on the serial monitor.
  The 5 LEDs connected to the Arduino light up depending on the voltage value.

  This program makes use of int, pinMode, Serial.begin, analogRead, Serial.print, float, Serial.println, if, else, and digitalWrite.
*/

// Variables
int analogPin = A0; // Creates a variable called "analogPin" and set it to correspond to the analog pin A0.
int val = 0; // Creates a variable called "val" and sets its value to 0.

// The setup function runs once when you press reset or power the board.
void setup() {
  Serial.begin(9600); // Set the data rate in bits per second to 9600 for serial data transmission.
  pinMode(8,OUTPUT); // This sets pin 8 as output.
  pinMode(9,OUTPUT); // This sets pin 9 as output.
  pinMode(10,OUTPUT); // This sets pin 10 as output.
  pinMode(11,OUTPUT); // This sets pin 11 as output.
  pinMode(12,OUTPUT); // This sets pin 12 as output.
}

// The loop function runs over and over again forever.
void loop() {
  val = analogRead(analogPin); // Sets the value of the variable "val" into the read value of analog pin A0.
  Serial.print("Bit Value: "); // Prints in the serial monitor the statement "Bit Value: ".
  Serial.print(val); // Prints in the serial monitor the value of the variable "val".

  float volt = val/204.6; // Creates a variable, that can be set as a number which has decimal points, called "volt" and sets its value to the quotient of the variable "val" and 204.6.

  Serial.print(" Voltage: "); // Prints in the serial monitor the statement " Voltage: ".
  Serial.println(volt); // Prints in the serial monitor the value of the variable "volt".

  if (volt >= 1) { // Detects if the variable "volt" is greater than or equal to 1.
    digitalWrite(8,HIGH); // This sets the value of pin 8 to HIGH voltage.
  } else { // Detects if the variable "volt" is less than 1.
    digitalWrite(8,LOW); // This sets the value of pin 8 to LOW voltage.
  }

  if (volt >= 2) { // Detects if the variable "volt" is greater than or equal to 2.
    digitalWrite(9,HIGH); // This sets the value of pin 9 to HIGH voltage.
  } else { // Detects if the variable "volt" is less than 2.
    digitalWrite(9,LOW); // This sets the value of pin 9 to LOW voltage.
  }

  if (volt >= 3) { // Detects if the variable "volt" is greater than or equal to 3.
    digitalWrite(10,HIGH); // This sets the value of pin 10 to HIGH voltage.
  } else { // Detects if the variable "volt" is less than 3.
    digitalWrite(10,LOW); // This sets the value of pin 10 to LOW voltage.
  }

  if (volt >= 4) { // Detects if the variable "volt" is greater than or equal to 4.
    digitalWrite(11,HIGH); // This sets the value of pin 11 to HIGH voltage.
  } else { // Detects if the variable "volt" is less than 4.
    digitalWrite(11,LOW); // This sets the value of pin 11 to LOW voltage.
  }

  if (volt >= 5) { // Detects if the variable "volt" is greater than or equal to 5.
    digitalWrite(12,HIGH); // This sets the value of pin 12 to HIGH voltage.
  } else { // Detects if the variable "volt" is less than 1.
    digitalWrite(12,LOW); // This sets the value of pin 12 to LOW voltage.
  }
}