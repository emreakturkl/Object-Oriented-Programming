#include "header.hpp"
#include <iostream>
using namespace std;

Sinif::Sinif(int a, double b, std::string c, int d)
: d(d) //const veri constructor tanımlama
{
    this->a = a;
    this->b = b;
    this->c = c;
}
Sinif::~Sinif()
{
    cout<<"yapici calisti"<<endl;
}
void Sinif::setle(int a, double b, std::string c)
{
    this-> a = a; // her değişkenin önünde this ptr vardır
    this-> b = b;
    this-> c = c;
    
}
void Sinif::yazdir() const
{
    cout<<"a:"<<a<<"b:"<<b<<"c:"<<c<<"d:"<<d<<endl;
}
bool Sinif::karsilastir(const Sinif &digerSinif) const
{
    return this->a > digerSinif.a;
}

