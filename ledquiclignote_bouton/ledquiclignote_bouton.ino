int bouton = 2;
int led;
int etatbouton;

void setup() {
  pinMode(bouton, INPUT);
  pinMode(led, OUTPUT);

}

void loop() {etatbouton = digitalRead(bouton);if(etatbouton==LOW){digitalWrite(led,HIGH);}else{digitalWrite(led,LOW);}delay(100);}