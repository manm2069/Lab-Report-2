/*
  RGB Color Selector

  This program sets the RGB that is connected to the Arduino to a set color.

  This program makes use of analogWrite.
*/

// The setup function runs once when you press reset or power the board.
void setup() {

}

// The loop function runs over and over again forever.
void loop() {
  analogWrite(11,159); // This sets the value of pin 11, which is connected to the red pin, to 159.
  analogWrite(10,69); // This sets the value of pin 10, which is connected to the blue pin, to 69.
  analogWrite(9,200); // This sets the value of pin 9, which is connected to the green pin, to 200.
}
