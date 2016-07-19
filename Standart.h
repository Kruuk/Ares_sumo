#ifndef STANDART
#define STANDART

#include "Brain.h"
#include "InformationStore.h"
#include "ToGo.h"

class Standart : public Brain
{
  public: 
    virtual void call();
    virtual void init(InformationStore*, ToGo*);
    Standart(void);
  private:
    void  think();
    void  count();
    const long long int time1;
    const long long int time2;
    const int MidDistance;
    const int Porog;
    const int smallDistance;
    InformationStore* store;
    ToGo* go;
    float exc;
    float PROP;
    float RightSpeed;
    float LeftSpeed;
    bool HaveCont;
};

#endif
