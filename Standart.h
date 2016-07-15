#ifndef STANDART
#define STANDART

#include "Brain.h"

class Standart : public Brain
{
  public: 
    virtual void call();
    virtual void init(InformationStore*, ToGo*);
  private:
    InformationStore* store;
    ToGo* go;
};

#endif
