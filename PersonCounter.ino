#include "SevSeg.h"
#include <Ultrasonic.h>
SevSeg sevseg;
Ultrasonic ultrasonic(A4, A5);   //A4 => triger//
Ultrasonic ultrasonicR(A2, A3);  //A2 => triger//

int entered = 0;
int exited = 0;
bool touched = false;
bool touchedR = false;
bool passed = false;
bool passedR = false;
int distance;
int distanceR;

bool exitPassed = false;
bool enteredPassed = false;

int door = 0;;
boolean buttonPressed = false;

//int doorWidth = 10; // Set the width of the door here.

void setup() {
  pinMode(12, INPUT_PULLUP);
  byte numDigits = 4;
  byte digitPins[] = {13, 10, 11, 4};
  byte segmentPins[] = {9, 2, 3, 5, 6, 8, 7, 10};

  bool resistorsOnSegments = false;
  bool updateWithDelays = true;
  byte hardwareConfig = COMMON_ANODE;
  bool leadingZeros = true; // Use 'true' if you'd like to keep the leading zeros
  bool disableDecPoint = true; // Use 'true' if your decimal point doesn't exist or isn't connected. Then, you only need to specify 7 segmentPins[]
  sevseg.begin(hardwareConfig, numDigits, digitPins, segmentPins, resistorsOnSegments, updateWithDelays, leadingZeros, disableDecPoint);
  sevseg.setBrightness(80);
  Serial.begin(9600);
}


void loop() {
if (door == 0){
  if (digitalRead(12) == LOW) {
    buttonPressed = true;
    sevseg.setNumber(1);
    sevseg.refreshDisplay();
  }
  if (digitalRead(12) == HIGH && buttonPressed) {
    door = ultrasonic.read();
    sevseg.setNumber(2);
    sevseg.refreshDisplay();
  }  
}

  distance = ultrasonic.read();
  distanceR = ultrasonicR.read();

  if (distance < ((door*2)/3)) {
    touched = true;
  }
  if (distanceR < ((door*2)/3)) {
    touchedR = true;
  }

  if (distance > ((door*2)/3) && touched) {
    touched = false;
    if (enteredPassed) {
      enteredPassed = false;
      entered++;
    } else {
      exitPassed = true;
    }

  }
  
  if (distanceR > ((door*2)/3) && touchedR) {
    touchedR = false;
    if (exitPassed) {
      exited++;
      exitPassed = false;
    } else {
      enteredPassed = true;
    }

  }


  sevseg.setNumber(entered - exited);
  sevseg.refreshDisplay();
//  Serial.print("o   =========");
//  Serial.print(distance);
//  Serial.println();
//  Serial.println();
//  Serial.println();
//  Serial.print("R   =========");
//  Serial.print(distanceR);
//  Serial.println();
//  Serial.println();
//  Serial.println();


    Serial.print("  Entered: ");
    Serial.print(entered);
    Serial.println();
    Serial.print("   Exited: ");
    Serial.print(exited);
    Serial.println();
    Serial.print("   door: ");
    Serial.print(door);
//  Serial.print("  Count: ");
//  Serial.print(entered - exited);

}
