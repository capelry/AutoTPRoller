
// user input
const int motorPin = 3;
const int buttonPin = 2;
int buttonState = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buttonPin, INPUT);
  pinMode(motorPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH)
  {
    // output pwm for TP rolling
    analogWrite(motorPin, 50);
  }
  else
  {
   analogWrite(motorPin, 0);
  }
  delay(500);

}
