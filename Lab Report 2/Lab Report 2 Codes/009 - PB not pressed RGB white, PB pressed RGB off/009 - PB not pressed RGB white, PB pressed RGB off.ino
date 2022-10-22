/*
  PB not pressed RGB white, PB pressed RGB off

  This program sets the RGB that is connected to the Arduino white for as long as the push button is unpressed, and turned off if pressed.

  This program makes use of int, pinmode, if, else, and digitalWrite.
*/

// Variables
int sensor; // This creates a variable called "sensor".

// The setup function runs once when you press reset or power the board.
void setup() {
  pinMode(13,INPUT_PULLUP); // This sets pin 13 as input.
  pinMode(12,OUTPUT); // This sets pin 12 as output. The pin of the RGB this is connected to is Red.
  pinMode(11,OUTPUT); // This sets pin 11 as output. The pin of the RGB this is connected to is Green.
  pinMode(10,OUTPUT); // This sets pin 10 as output. The pin of the RGB this is connected to is Blue.
}

// The loop function runs over and over again forever.
void loop() {
  sensor = digitalRead(13); // This reads pin 13 and turns the variable "sensor" to the read value.
  if(sensor){
    // White Color
    digitalWrite(12,HIGH); // This sets the value of pin 12 to HIGH voltage.
    digitalWrite(11,HIGH); // This sets the value of pin 11 to HIGH voltage.
    digitalWrite(10,HIGH); // This sets the value of pin 10 to HIGH voltage.
  } else {
    // No Color
    digitalWrite(12,LOW); // This sets the value of pin 12 to LOW voltage.
    digitalWrite(11,LOW); // This sets the value of pin 11 to LOW voltage.
    digitalWrite(10,LOW); // This sets the value of pin 10 to LOW voltage.
  }
}
