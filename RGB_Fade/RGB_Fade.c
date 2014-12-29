int red = 3;
int green = 9;
int blue = 6;
int brightness = 0;

void setup(){
}

void loop() {
analogWrite(green, brightness);
brightness = brightness + 5;
delay(100);
}