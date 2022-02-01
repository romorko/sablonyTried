//
// Created by roman on 1. 2. 2022.
//
#ifndef SABLONYTRIED_SABLONYTRIED_H
#define SABLONYTRIED_SABLONYTRIED_H

template<typename Any,typename Other=int,int pocet=10>
class Obdlznik
{
private:
    Any a;
    Any b;
public:
    Obdlznik() : a(1), b(1){};
    explicit Obdlznik(Any x) : a(x), b(x){};
    Obdlznik(Any x, Any y) : a(x), b(y){};
    Any getObvod() const;
    Any getObsah() const;
    auto getObvod1() -> decltype(a+b) const;//alternativny zapis prototypu funkcie v C++
};

template<typename Any,typename Other,int pocet>
Any Obdlznik<Any,Other,pocet>::getObvod() const
{
    return 2 * (a + b);
}

template<typename Any,typename Other,int pocet>
Any Obdlznik<Any,Other,pocet>::getObsah() const
{
    return a * b;
}

template<typename Any,typename Other,int pocet>
auto Obdlznik<Any,Other,pocet>::getObvod1() -> decltype(a+b) const
{
    return (2 * (a + b));
}


#endif //SABLONYTRIED_SABLONYTRIED_H
