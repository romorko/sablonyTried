#include <iostream>
#include "sablonyTried.h"

int main()
{
    Obdlznik<int> Prvy(3,5);
    Obdlznik<float> Druhy(3.6);
    Obdlznik<double> Treti(5.6789);
    std::cout<<Prvy.getObvod()<<std::endl;
    std::cout<<Druhy.getObsah()<<std::endl;
    std::cout<<Treti.getObvod1()<<std::endl;
    return 0;
}
