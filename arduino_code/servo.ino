#include <Servo.h>


Servo servo;

int angle = 0;

void setup() {
  servo.attach(8);
  servo.write(0);
}

void loop() {
  servo.write(0);
  delay(21600);
  servo.write(90);
  delay(300);

}
