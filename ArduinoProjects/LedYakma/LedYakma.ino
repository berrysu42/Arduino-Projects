
#define green_pin 2
#define yellow_pin 4
#define red_pin 8
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(red_pin, OUTPUT);
  pinMode(yellow_pin,OUTPUT);
  pinMode(green_pin,OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(red_pin, HIGH);  // change state of the LED by setting the pin to the HIGH voltage level
  delay(500);                      // wait for a second
  digitalWrite(red_pin, LOW);   // change state of the LED by setting the pin to the LOW voltage level
  delay(500);      
  
  digitalWrite(yellow_pin,HIGH);
  delay(1000);
  digitalWrite(yellow_pin,LOW)   ;
  delay(1000);  
  
  digitalWrite(green_pin,HIGH);
  delay(300);
  digitalWrite(green_pin,LOW);
  delay(300);           // wait for a second
}
