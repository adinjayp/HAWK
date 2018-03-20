

#include <Servo.h>

Servo myservo; 

int pos = 0;   
int buttonState = 0;
void setup() {
  myservo.attach(9); 
  pinMode(4, INPUT);
  pinMode(9, OUTPUT);
  
}

void loop() {
  buttonState = digitalRead(4);
  if (buttonState == HIGH) {
    digitalWrite(4, HIGH);
    for (pos = 0; pos <= 20; pos += 1) { 
    myservo.write(pos); 
    delay(100);
  }
    
  }else {
    // turn LED off:
    digitalWrite(4, LOW);
  }

  
  
}

