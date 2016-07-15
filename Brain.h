#ifndef BRAIN
#define BRAIN

class InformationStore;
class ToGo;

class Brain
{
  public:
    virtual void call()=0;
    virtual void init(InformationStore*, ToGo*)=0;
};

#endif
