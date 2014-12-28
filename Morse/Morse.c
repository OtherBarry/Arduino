int red = 2;
int green = 4;
int sDelay = 500;
int lDelay = 1000;

void dot(){
  digitalWrite(red, HIGH);
  delay(lDelay);
  digitalWrite(red, LOW);
  delay(lDelay);
}

void dash(){
  digitalWrite(green, HIGH);
  delay(lDelay);
  digitalWrite(green, LOW);
  delay(lDelay);
}

void cBreak(){
  digitalWrite(green, HIGH);
  digitalWrite(red, HIGH);
  delay(lDelay);
  digitalWrite(green, LOW);
  digitalWrite(red, LOW);
  delay(lDelay);
}

void wBreak(){
  cBreak();
  cBreak();
}

void lBreak(){
  digitalWrite(green, HIGH);
  digitalWrite(red, HIGH);
  delay(5000);
  digitalWrite(green, LOW);
  digitalWrite(red, LOW);
  delay(lDelay);
}


void sA(){
  dot();
  dash();
  cBreak();
}

void sB(){
  dash();
  dot();
  dot();
  dot();
  cBreak();
}

void sC(){
  dash();
  dot();
  dash();
  dot();
  cBreak();
}

void sD(){
  dash();
  dot();
  dot();
  cBreak();
}

void sE(){
  dot();
  cBreak();
}

void sF(){
  dot();
  dot();
  dash();
  dot();
  cBreak();
}

void sG(){
  dash();
  dash();
  dot();
  cBreak();
}

void sH(){
  dot();
  dot();
  dot();
  dot();
  cBreak();
}

void sI(){
  dot();
  dot();
  cBreak();
}

void sJ(){
  dot();
  dash();
  dash();
  dash();
  cBreak();
}

void sK(){
  dash();
  dot();
  dash();
  cBreak();
}

void sL(){
  dot();
  dash();
  dot();
  dot();
  cBreak();
}

void sM(){
  dash();
  dash();
  cBreak();
}

void sN(){
  dash();
  dot();
  cBreak();
}

void sO(){
  dash();
  dash();
  dash();
  cBreak();
}

void sP(){
  dot();
  dash();
  dash();
  dot();
  cBreak();
}

void sQ(){
  dash();
  dash();
  dot();
  dash();
  cBreak();
}

void sR(){
  dot();
  dash();
  dot();
  cBreak();
}

void sS(){
  dot();
  dot();
  dot();
  cBreak();
}

void sT(){
  dash();
  cBreak();
}

void sU(){
  dot();
  dot();
  dash();
  cBreak();
}

void sV(){
  dot();
  dot();
  dot();
  dash();
  cBreak();
}

void sW(){
  dot();
  dash();
  dash();
  cBreak();
}

void sX(){
  dash();
  dot();
  dot();
  dash();
  cBreak();
}

void sY(){
  dash();
  dot();
  dash();
  dash();
  cBreak();
}

void sZ(){
  dash();
  dash();
  dot();
  dot();
  cBreak();
}

void setup(){
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
}
  
void loop() {
  lBreak();
  sM();
  sE();
  sR();
  sR();
  sY();
  wBreak();
  sC();
  sH();
  sR();
  sI();
  sS();
  sT();
  sM();
  sA();
  sS();
  lBreak();
} 