#include "ToGo.h"

ToGo::ToGo(int _leftPowerPin, int  _rightPowerPin, int _leftDirectionPin, int _rightDirectionPin)
:leftPowerPin(_leftPowerPin),
rightPowerPin(_rightPowerPin),
leftDirectionPin(_leftDirectionPin),
rightDirectionPin(_rightDirectionPin)
{
  
}



void ToGo::init()
{
  pinMode(leftDirectionPin, OUTPUT);
  pinMode(rightDirectionPin, OUTPUT);
}


void ToGo::setPower(float right, float left)
{
  rightPower = right;
  leftPower = left;
}



void ToGo::call()
{
  if(rightPower>0)
  {
    digitalWrite(rightDirectionPin, LOW);
  }else
  {
    digitalWrite(rightDirectionPin, HIGH);
  }
  if (leftPower<0)
  {
    digitalWrite(leftDirectionPin, LOW);
  }else{
    digitalWrite(leftDirectionPin, HIGH);
  }

  analogWrite(rightPowerPin, int(constrain(abs(rightPower*255), 0, 255)) );
  analogWrite(leftPowerPin, int(constrain(abs(leftPower*255), 0, 255)) );  
}








