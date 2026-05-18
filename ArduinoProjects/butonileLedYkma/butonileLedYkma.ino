
#define buton 8
#define red_pin 13
int buton_durum = 0;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(buton, INPUT);
  pinMode(red_pin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  buton_durum = digitalRead(buton);

  if (buton_durum == 1) {
    digitalWrite(red_pin, HIGH);

  } 
  else {
    digitalWrite(red_pin, LOW);
  }
}
