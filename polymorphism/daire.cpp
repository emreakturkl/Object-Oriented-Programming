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
