//
//  daire.cpp
//  10_polymorphism
//
//  Created by Emre AKTÜRK on 16/09/2017.
//  Copyright © 2017 Emre AKTÜRK. All rights reserved.
//

#include "daire.hpp"
#include <iostream>
using namespace std;

Daire::Daire(double r)
{
    this->r = r;
}
Daire::~Daire()
{
    cout<<"Daire yikisici calisti"<<endl;
}
void Daire::tanistir()
{
    cout<<"Ben Daireyim!"<<endl;
}
double Daire::alanHesapla()
{
    return 3.14*r*r;
}

double Daire::cevreHesapla()
{
    return 2*3.14*r;
}
