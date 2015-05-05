/* 
P1_Sygnalizacja_Swietlna.ino 
  by Mateusz Jaros\ The JarOS 
    01.03.2015

polaczenie:
  dioda czerwona poprzez rezystor do pinu 9 
  didoa żóta przez rezystor do pinu 10
  dioda zielona przez rezystor do pinu 11.
  
  
  Program zapala i gasi diody tak jak to jest w sygnalizacji swietlnej.

*/
// PINY
#define red 9 // czerwony LED
#define yellow 10 // zolty LED
#define green 11 // zielony LED

void setup() {
  //ustawianie pinow jako wyjscie
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  
  // wylaczanie wszystkich LEDow
  digitalWrite(red, LOW);
  digitalWrite(yellow, LOW);
  digitalWrite(green, LOW);
}

void loop() {
  //zapalanie zielonego LEDa i czekanie 10 sekund 
  digitalWrite(green, HIGH);
  delay(10000);
  digitalWrite(green, LOW);
  // zapalanie zoltego LEDa na 7 sekund 
  digitalWrite(yellow, HIGH);
  delay(7000);
  digitalWrite(yellow, LOW);
  // zapalnie czerownego LEDa i czekanie 10 sekund
  digitalWrite(red, HIGH);
  delay(10000);
  // migniecie 3x zoltym LEDem po 0.7 sekundy
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
  //zgaszenie czerwonej diody
  digitalWrite(red, LOW);
}
