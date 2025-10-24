void setup()
{
  pinMode(3, OUTPUT);
  
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  pinMode(12, INPUT);
  
  Serial.begin(9600);
}

void loop()
{
  if (digitalRead(4) == HIGH) {
    tone(3, 523, 200);
    Serial.println("Si");
  }
  else if (digitalRead(5) == HIGH) {
    tone(3, 440, 200);
    Serial.println("La");
  }
  else if (digitalRead(6) == HIGH) {
    tone(3, 392, 200);
    Serial.println("Sol");
  }
  else if (digitalRead(7) == HIGH) {
    tone(3, 349, 200);
    Serial.println("Fa");
  }
  else if (digitalRead(8) == HIGH) {
    tone(3, 329, 200);
    Serial.println("Mi");
  }
  else if (digitalRead(9) == HIGH) {
    tone(3, 294, 200);
    Serial.println("Re");
  }
  else if (digitalRead(12) == HIGH) {
    tone(3, 261, 200);
    Serial.println("Do");
  }
  else{
    noTone(3);
  }
  
}
