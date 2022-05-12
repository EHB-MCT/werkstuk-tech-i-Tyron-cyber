int buttonPin = 2;   
int ledPin =  3;     
 
int ledstate = LOW ;
int lastButtonState;
int currentButtonState;      

boolean lightOn = false;
void setup() {
  Serial.begin(9600);                                                                                                                        
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);

  currentButtonState = digitalRead(buttonPin);

}

void loop() {
  // read the state of the pushbutton value:
  lastButtonState = currentButtonState;
 currentButtonState = digitalRead(buttonPin);

 if(currentButtonState == 1) {
  lightOn = !lightOn;
 }

 Serial.println(currentButtonState == 1);

 if(lightOn) {
  digitalWrite(ledPin, HIGH);
 } else {
  
  digitalWrite(ledPin, LOW);
 }

 delay(100);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
//  if (lastButtonState == HIGH && currentButtonState == LOW) {
//    // turn LED on:
//   Serial.print("button pressed");
// hier komt de code voor alle ledjes zodat ze aan kunnen wanner je op de knop drukt 
//   digitalWrite(ledPin, HIGH);
//  } else {
//    // turn LED off:
//    digitalWrite(ledPin, LOW);
//  }
}
