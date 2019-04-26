#ifndef sekil_h
#define sekil_h
#include <iostream>

// -> virtual destructor alt sınıftan başlayarak siler

// Shape Abstruct Class
class Sekil
{
public:
    virtual void tanistir() = 0;
    virtual double alanHesapla() = 0;
    virtual double cevreHesapla() = 0;
    virtual ~Sekil() { std::cout<<"Sekil yikicisi çalişti"<<std::endl;}
};

#endif /* sekil_h */
