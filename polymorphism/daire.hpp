#ifndef daire_hpp
#define daire_hpp
#include "sekil.h"

class Daire : public Sekil
{
    double r;
public:
    Daire(double = 0);
    ~Daire();
    void tanistir();
    double alanHesapla();
    double cevreHesapla();
};

#endif /* daire_hpp */
