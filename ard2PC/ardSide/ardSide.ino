int buttonState = 0;
const int ledPin = 13; // define input port. port 13 will blink the onboard led (and external led). Another port will blink external LED only.
const int buttonPin = 2; // define input port
int buttonCount = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  Serial.begin(9600); // recheck this everytime you re-connect Arduino
}

void loop(){
   
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
    Serial.println("Confirm");
    delay(1000); // delay to prevent Arduino program to send too much input. Give Arduino time to process.
    digitalWrite(ledPin, HIGH);
  } else
  {
    digitalWrite(ledPin, LOW);
  }
}
