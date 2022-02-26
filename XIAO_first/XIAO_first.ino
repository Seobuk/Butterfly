#include <TimerTC3.h>
bool isLEDOn = false;
bool isLEDOff = true;
char time = 0;

int DOUT1 = 1;
int DOUT2 = 2;
int Time = 20000;
int val;
void setup() {
      pinMode(1, OUTPUT);   //PWM
      pinMode(2, OUTPUT);   //DIR
      pinMode(13, OUTPUT);
 
}
void loop() {
  for (val = 0; val <= Time; val++) {         // 100 -> mean the frequency is 941.1Hz
    pwm(DOUT1, 20000, 200);
    digitalWrite(2, isLEDOn);
    digitalWrite(13, isLEDOn);
  }
  for (val = Time; val >= 0; val--) {
    pwm(DOUT1, 20000, 200);
    digitalWrite(2, isLEDOff);
    digitalWrite(13, isLEDOff);

  }
}
