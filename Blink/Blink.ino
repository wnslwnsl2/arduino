int a = 13;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(a, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(a, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(a, LOW);    // turn the LED off by making the voltage LOW
  delay(100);                       // wait for a second
}
