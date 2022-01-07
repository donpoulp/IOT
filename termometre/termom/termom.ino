int x;
int del = 2;
int val;
int temp;
int diz;
int uni;
int boucle;

void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);

}

void loop() {
  val = analogRead(0);
  temp=(500*val)/1024;;
  diz = temp/10;
  uni=temp%10;
  boucle=0;
  while(boucle<200){
    digitalWrite(13, HIGH);
    affdigit(diz);
    delay(del);
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    affdigit(uni);
    delay(del);
    digitalWrite(12, LOW);
    digitalWrite(11, HIGH);
    degres();
    delay(del);
    digitalWrite(11, LOW);
    digitalWrite(10, HIGH);
    C();
    delay(del);
    digitalWrite(10, LOW);
    if(temp>=21||temp<=17){
    digitalWrite(2, HIGH);
    }
    boucle++;
  }
}

void affdigit(int x){
  switch(x){
    case 1:un();break;
    case 2:deux();break;
    case 3:trois();break;
    case 4:quatre();break;
    case 5:cinq();break;
    case 6:six();break;
    case 7:sept();break;
    case 8:huit();break;
    case 9:neuf();break;
    default:zero();break;
  }
}

void degres(){
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
}

void C(){
  digitalWrite(9, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  digitalWrite(3, HIGH);
}

void un(){
  digitalWrite(9, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);
}

void deux(){
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(3, LOW);
}

void trois(){
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(3, LOW);
}

void quatre(){
  digitalWrite(9, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
}

void cinq(){
  digitalWrite(9, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
}

void six(){
  digitalWrite(9, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
}

void sept(){
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);
}

void huit(){
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
}

void neuf(){
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
}

void zero(){
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  digitalWrite(3, HIGH);
}
