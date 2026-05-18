#define led 2
void setup() {
  
  pinMode(2, OUTPUT);
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  int isik = analogRead(A5);
  Serial.println(isik);
  delay(100);
  if (isik>550)
    digitalWrite(led, LOW);
  if (isik<200)
    digitalWrite(led, HIGH);


}
