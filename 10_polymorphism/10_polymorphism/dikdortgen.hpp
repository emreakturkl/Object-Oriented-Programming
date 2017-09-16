//
//  dikdortgen.hpp
//  10_polymorphism
//
//  Created by Emre AKTÜRK on 16/09/2017.
//  Copyright © 2017 Emre AKTÜRK. All rights reserved.
//

#ifndef dikdortgen_hpp
#define dikdortgen_hpp
#include "sekil.h"

class Dikdortgen : public Sekil
{
    double x,y;
public:
    Dikdortgen(double = 0, double = 0);
    ~Dikdortgen();
    void tanistir();
    double alanHesapla();
    double cevreHesapla();
};

#endif /* dikdortgen_hpp */
