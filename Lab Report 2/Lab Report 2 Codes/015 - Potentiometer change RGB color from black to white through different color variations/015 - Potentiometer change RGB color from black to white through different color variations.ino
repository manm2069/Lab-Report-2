/*
  Potentiometer change RGB color from black to white through different color variations

  This program reads the bit value of the value of analog pin AO and converts it to a voltage, both values are then displayed on the serial monitor.
  The RGB LED connected to the Arduino lights up depending on the voltage value.

  This program makes use of int, pinMode, Serial.begin, analogRead, Serial.print, float, Serial.println, if, and digitalWrite.
*/

// Variables
int analogPin = A0; // Creates a variable called "analogPin" and set it to correspond to the analog pin A0.
int val = 0; // Creates a variable called "val" and sets its value to 0.

// The setup function runs once when you press reset or power the board.
void setup() {
  Serial.begin(9600); // Set the data rate in bits per second to 9600 for serial data transmission.
  pinMode(10,OUTPUT); // This sets pin 10 as output. This is also connected to the red pin of the RGB LED.
  pinMode(9,OUTPUT); // This sets pin 9 as output. This is also connected to the blue pin of the RGB LED.
  pinMode(8,OUTPUT); // This sets pin 8 as output. This is also connected to the green pin of the RGB LED.
}

// The loop function runs over and over again forever.
void loop() {
  val = analogRead(analogPin); // Sets the value of the variable "val" into the read value of analog pin A0.
  Serial.print("Bit Value: "); // Prints in the serial monitor the statement "Bit Value: ".
  Serial.print(val); // Prints in the serial monitor the value of the variable "val".

  float volt = val/204.6; // Creates a variable, that can be set as a number which has decimal points, called "volt" and sets its value to the quotient of the variable "val" and 204.6.

  Serial.print(" Voltage: "); // Prints in the serial monitor the statement " Voltage: ".
  Serial.println(volt); // Prints in the serial monitor the value of the variable "volt".

  if (volt >= 0) { // Detects if the variable "volt" is equal to 0.
    analogWrite(10,0); // This sets the value of pin 8 to 0.
    analogWrite(9,0); // This sets the value of pin 9 to 0.
    analogWrite(8,0); // This sets the value of pin 10 to 0.
  }

  if (volt >= 1.5) { // Detects if the variable "volt" is equal to 1.5.
    analogWrite(10,255); // This sets the value of pin 8 to 255.
    analogWrite(9,0); // This sets the value of pin 9 to 0.
    analogWrite(8,0); // This sets the value of pin 10 to 0.
  }

  if (volt >= 2.5) { // Detects if the variable "volt" is equal to 2.5.
    analogWrite(10,0); // This sets the value of pin 8 to 0.
    analogWrite(9,255); // This sets the value of pin 9 to 255.
    analogWrite(8,0); // This sets the value of pin 10 to 0.
  }

  if (volt >= 3.5) { // Detects if the variable "volt" is equal to 3.5.
    analogWrite(10,0); // This sets the value of pin 8 to 0.
    analogWrite(9,0); // This sets the value of pin 9 to 0.
    analogWrite(8,255); // This sets the value of pin 10 to 255.
  }

  if (volt >= 5) { // Detects if the variable "volt" is equal to 5.
    analogWrite(10,255); // This sets the value of pin 8 to 255.
    analogWrite(9,255); // This sets the value of pin 9 to 255.
    analogWrite(8,255); // This sets the value of pin 10 to 255.
  }
}