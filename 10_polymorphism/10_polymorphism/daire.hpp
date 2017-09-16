//
//  daire.hpp
//  10_polymorphism
//
//  Created by Emre AKTÜRK on 16/09/2017.
//  Copyright © 2017 Emre AKTÜRK. All rights reserved.
//

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
