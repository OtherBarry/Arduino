int red = 3;
int green = 9;
int blue = 6;
int redBrightness = 255;
int greenBrightness = 0;
int blueBrightness = 0;
int fadeAmount = 1;
int fDelay = 20;

//red    = 255 0   0
//orange = 255 165 0
//yellow = 255 255 0
//green  = 0   255 0
//blue   = 0   0   255
//indigo = 75  0   130
//violet = 238 130 238



void setup(){
}

void loop() {
  analogWrite(red, redBrightness);
  analogWrite(green, greenBrightness);
  analogWrite(blue, blueBrightness);
  while(greenBrightness < 255){
    greenBrightness = greenBrightness + fadeAmount;
    analogWrite(green, greenBrightness);
    delay(fDelay * 2);
  }
  while(redBrightness > 0){
    redBrightness = redBrightness - fadeAmount;
    analogWrite(red, redBrightness);
    delay(fDelay);
  }
  while(greenBrightness > 0 && blueBrightness < 255){
    greenBrightness = greenBrightness - fadeAmount;
    blueBrightness = blueBrightness + fadeAmount;
    analogWrite(green, greenBrightness);
    analogWrite(blue, blueBrightness);
    delay(fDelay);
  }
  while(blueBrightness > 205) {
     blueBrightness = blueBrightness - fadeAmount;
     delay(fDelay / 10);
  }
  while(redBrightness < 75 && blueBrightness > 130){
    redBrightness = redBrightness + fadeAmount;
    blueBrightness = blueBrightness - fadeAmount;
    analogWrite(blue, blueBrightness);
    analogWrite(red, redBrightness);
    delay(fDelay);
  }
  while(redBrightness < 130){
    redBrightness = redBrightness + fadeAmount;
    analogWrite(red, redBrightness);
    delay(fDelay / 10);
  }
  while(greenBrightness < 22){
    greenBrightness = greenBrightness + fadeAmount;
    analogWrite(green, greenBrightness);
    delay(fDelay / 10);
  }
  while(redBrightness < 238 && greenBrightness < 130 && blueBrightness < 238){
    redBrightness = redBrightness + fadeAmount;
    greenBrightness = greenBrightness + fadeAmount;
    blueBrightness = blueBrightness + fadeAmount;
    analogWrite(blue, blueBrightness);
    analogWrite(red, redBrightness);
    analogWrite(green, greenBrightness);
    delay(fDelay);
  }
  while(blueBrightness > 130){
    blueBrightness = blueBrightness - fadeAmount;
    analogWrite(blue, blueBrightness);
    delay(fDelay / 10);
  }
  while(greenBrightness > 0 && blueBrightness > 0){
    blueBrightness = blueBrightness - fadeAmount;
    greenBrightness = greenBrightness - fadeAmount;
    analogWrite(blue, blueBrightness);
    analogWrite(green, greenBrightness);
    delay(fDelay);
  }
  while(redBrightness < 255){
    redBrightness = redBrightness + fadeAmount;
    analogWrite(red, redBrightness);
    delay(fDelay);
  }
}