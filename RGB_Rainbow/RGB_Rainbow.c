int red = 3;
int green = 9;
int blue = 6;
int redBrightness = 255;
int greenBrightness = 0;
int blueBrightness = 0;
int fDelay = 20;
int sDelay = 5;
int redIdealBright = 0;
int redStep = 0;
int greenIdealBright = 0;
int greenStep = 0;
int blueIdealBright = 0;
int blueStep = 0;
void rStep(){
	redStep = redBrightness + ((redIdealBright - redBrightness) / sDelay);
}
void gStep(){
  greenStep = greenBrightness + ((greenIdealBright - greenBrightness) / sDelay);
}
void bStep(){
	blueStep = blueBrightness + ((blueIdealBright - blueBrightness) / sDelay);
}
void redFade(){
		redBrightness = redBrightness + redStep;
    analogWrite(red, redBrightness);
    delay(fDelay);
}
void greenFade(){
		greenBrightness = greenBrightness + greenStep;
    analogWrite(green, greenBrightness);
    delay(fDelay);
}
void blueFade(){
		blueBrightness = blueBrightness + blueStep;
    analogWrite(blue, blueBrightness);
    delay(fDelay);
}
void setup(){
  analogWrite(red, redBrightness);
  analogWrite(green, greenBrightness);
  analogWrite(blue, blueBrightness);
}
void loop() {
	//Red to Orange
  greenIdealBright = 165;
	gStep();
	while (greenBrightness < greenIdealBright){
		greenFade();
	}
	//Orange to Yellow
	greenIdealBright = 255;
	gStep();
	while (greenBrightness < greenIdealBright){
		greenFade();
	}
	//Yellow to Green
	redIdealBright = 0;
	rStep();
	while (redBrightness > redIdealBright){
		redFade();
	}
	//Green to Blue
	greenIdealBright = 0;
	blueIdealBright = 255;
	gStep();
	bStep();
	while (greenBrightness > greenIdealBright && blueBrightness < blueIdealBright){
		greenFade();
		blueFade();
	}
	//Blue to Indigo
	redIdealBright = 75;
	blueIdealBright = 130;
	rStep();
	bStep();
	while (redBrightness < redIdealBright && blueBrightness > blueIdealBright){
		blueFade();
		redFade();
	}
	//Indigo to Violet
	redIdealBright = 238;
	greenIdealBright = 130;
	blueIdealBright = 238;
	rStep();
	gStep();
	bStep();
	while (redBrightness < redIdealBright && greenBrightness < greenIdealBright && blueBrightness < blueIdealBright){
		redFade();
		greenFade();
		blueFade();
	}
	//Violet to Red
	redIdealBright = 255;
	greenIdealBright = 0;
	blueIdealBright = 0;
	rStep();
	gStep();
	bStep();
	while (redBrightness < redIdealBright && greenBrightness < greenIdealBright && blueBrightness < blueIdealBright){
		redFade();
		greenFade();
		blueFade();
	}
}
