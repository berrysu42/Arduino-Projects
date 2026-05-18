int ledler[] ={2,3,4,5,6};
void setup() {
  
  for (int i=0;i<5;i++){
    pinMode(ledler[i],OUTPUT);
  }
}

// the loop function runs over and over again forever
void loop() {
  for(int i=0;i<5;i++){
    digitalWrite(ledler[i], HIGH);  // change state of the LED by setting the pin to the HIGH voltage level
    delay(50);                      // wait for a second
    digitalWrite(ledler[i], LOW);   // change state of the LED by setting the pin to the LOW voltage level
    delay(10);  

  }
  for(int j=5;j>-1;j--){
    digitalWrite(ledler[j], HIGH);  // change state of the LED by setting the pin to the HIGH voltage level
    delay(10);                      // wait for a second
    digitalWrite(ledler[j], LOW);   // change state of the LED by setting the pin to the LOW voltage level
    delay(10); 
  }
                      
}
