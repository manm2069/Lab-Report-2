/*
  PB not pressed RG on, PB pressed RB off

  This program sets the RGB that is connected to the Arduino has the pins red and green on for as long as the push button is unpressed, and on for red and blue if pressed.

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
    // Red and Green
    digitalWrite(12,HIGH); // This sets the value of pin 12 to HIGH voltage.
    digitalWrite(11,HIGH); // This sets the value of pin 11 to HIGH voltage.
    digitalWrite(10,LOW); // This sets the value of pin 10 to LOW voltage.
  } else {
    // Red and Blue
    digitalWrite(12,HIGH); // This sets the value of pin 12 to HIGH voltage.
    digitalWrite(11,LOW); // This sets the value of pin 11 to LOW voltage.
    digitalWrite(10,HIGH); // This sets the value of pin 10 to HIGH voltage.
  }
}
