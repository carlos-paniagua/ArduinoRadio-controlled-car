#include <Servo.h>
Servo myservo;

int foward = 2;
int back = 4;
int m1 = 6;
int m2 = 7;
int pwm = 11;
int seven = 0;
Int four = 0;
Int pin12 = 12;
Int pin13 = 13;

void setup()
{
  myservo.attach(10);
  pinMode(foward, INPUT);
  pinMode(back, INPUT);
  pinMode(m1, OUTPUT);
  pinMode(m2, OUTPUT);
  pinMode(pin12, INPUT);
  pinMode(pin13, INPUT);
}

void loop()
{
  seven = digitalRead(pin7);
  four = digitalRead(pin4);
  if (seven == 0)
  {
    delay(100);
    myservo.write(30)
        delay(100);
  }
  else if (four == 0)
  {
    delay(100);
    myservo.write(150)
        delay(100);
  }
  else
  {
    delay(100);
    myservo.write(90);
    delay(100);
  }

  if (digitalRead(foward) == LOW)
  {
    digitalWrite(m1, HIGH);
    digitalWrite(m2, LOW);
  }
  else if (digitalRead(back) == LOW)
  {
    digitalWrite(m1, LOW);
    digitalWrite(m2, HIGH);
  }
  else
  {
    digitalWrite(m1, LOW);
    digitalWrite(m2, LOW);
  }
  delay(100);
}
