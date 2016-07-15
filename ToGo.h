#ifndef TO_GO
#define TO_GO

#include <Arduino.h>

class ToGo{
  public:
    ToGo(int _leftPowerPin, int  _rightPowerPin, int _leftDirectionPin, int _rightDirectionPin);
    void call();
    void init();
    void setPower(float right, float left);
  private:
    const int leftPowerPin;
    const int rightPowerPin;
    const int leftDirectionPin;
    const int rightDirectionPin;
    float rightPower;
    float leftPower;
};

#endif
