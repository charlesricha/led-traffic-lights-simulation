
//declaring the variables for each LED light
  int redLED = 12;
  int orangeLED = 7;
  int greenLED = 21;
  int button = 4;
  bool buttonPressing = false;
  void setup() {

    //giving input and output values

    pinMode(redLED,OUTPUT);
    pinMode(orangeLED,OUTPUT);
    pinMode(greenLED,OUTPUT);
    pinMode(button,INPUT);


}

void loop() {
  if(digitalRead(button) == HIGH){
    buttonPressing = true;
  }else{
    buttonPressing = false;
  }
  
  if(buttonPressing == true ){
    //increase in delay to allow pedestrians to cross
    digitalWrite(redLED,HIGH);
    delay(10000);
    digitalWrite(redLED,LOW);

    digitalWrite(orangeLED,HIGH);
    delay(2000);
    digitalWrite(orangeLED,LOW);

    digitalWrite(greenLED,HIGH);
    delay(3000);
    digitalWrite(greenLED,LOW);

  }
  else{
    digitalWrite(redLED,HIGH);
    delay(5000);
    digitalWrite(redLED,LOW);

    digitalWrite(orangeLED,HIGH);
    delay(2000);
    digitalWrite(orangeLED,LOW);

    digitalWrite(greenLED,HIGH);
    delay(3000);
    digitalWrite(greenLED,LOW);
  }

}
