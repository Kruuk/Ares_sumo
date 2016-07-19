#include <Standart.h>
Standart::Standart(void):HaveCont(0),
{
  
}
void Standart::call()
{
  think();
  count();
}
void Standart::think()
{ 
  if( store->getDigitRightD()&&store->getDigitLeftD()&&store->getDigitMidD)&&(!HaveCont)&&(store->getAnalogRightD()>=Porog)&&(store->getAnalogRightD()>=Porog))
    {
      store->setCondition(0);
    }
    
  if( !store->getDigitRightD()||!store->getDigitLeftD()||!store->getDigitMidD )
    {
      store->setCondition(1);
      HaveCont=1;
    }
   if
}
void Standart::count()
{
  
}

