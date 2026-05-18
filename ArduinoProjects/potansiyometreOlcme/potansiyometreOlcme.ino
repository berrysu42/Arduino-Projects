#define potansiyoMetre A0

int potDurum = 0;
void setup() {
  Serial.begin(9600);
  Serial.println("Ptansiyometre Değer Okuma Başlatılıyor...");
  
}

// the loop function runs over and over again forever
void loop() {
  potDurum = analogRead(A0);
  float gerilim = (5.00/1024.00)*potDurum;
  Serial.print(potDurum);  
  Serial.print(" ->"); 
  Serial.println(gerilim);
  delay(500);                
}
