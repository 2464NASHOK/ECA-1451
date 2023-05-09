// Include the Stepper library
#include <Stepper.h>

// Define the number of steps per revolution
const int stepsPerRevolution = 200;

// Initialize the stepper motor with its pin connections
Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);

void setup() {
  // Set the speed of the stepper motor in revolutions per minute (RPM)
  myStepper.setSpeed(60);
}

void loop() {
  // Rotate the stepper motor one full revolution clockwise
  myStepper.step(stepsPerRevolution);
  delay(1000);

  // Rotate the stepper motor one full revolution counterclockwise
  myStepper.step(-stepsPerRevolution);
  delay(1000);
}
