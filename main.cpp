#include <iostream>
#include "sablonyTried.h"

int main()
{
    Obdlznik<int,int,15> Prvy(3,5);
    Obdlznik<float,float> Druhy(3.6); //vyuzije implicitnu hodnotu pre treti parameter
    Obdlznik<double> Treti(5.6789); //vyuzije implicitnu hodnotu pre jeden typ aj treti parameter
    std::cout<<Prvy.getObvod()<<std::endl;
    std::cout<<Druhy.getObsah()<<std::endl;
    std::cout<<Treti.getObvod1()<<std::endl;
    return 0;
}
