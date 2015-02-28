// PINS
#define red 9 // red LED
#define yellow 10 // yellow LED
#define green 11 // green LED

void setup() {
  //set pins as output
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  
  // turn off all LEDs
  digitalWrite(red, LOW);
  digitalWrite(yellow, LOW);
  digitalWrite(green, LOW);
}

void loop() {
  // turn on green LED and wait 10 seconds
  digitalWrite(green, HIGH);
  delay(10000);
  digitalWrite(green, LOW);
  // turn on yellow LED for 7 seconds
  digitalWrite(yellow, HIGH);
  delay(7000);
  digitalWrite(yellow, LOW);
  // turn on red LED and wait 10 seconds
  digitalWrite(red, HIGH);
  delay(10000);
  // blink yellow LED 3 times 
  digitalWrite(yellow, HIGH);
  delay(700);
  digitalWrite(yellow, LOW);
  delay(700);
  digitalWrite(yellow, HIGH);
  delay(700);
  digitalWrite(yellow, LOW);
  delay(700);
  digitalWrite(yellow, HIGH);
  delay(700);
  digitalWrite(yellow, LOW);
  // turn off red LED
  digitalWrite(red, LOW);
}
