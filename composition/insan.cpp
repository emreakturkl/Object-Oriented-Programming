#include "insan.hpp"
#include <iostream>
#include <string>
using namespace std;

Insan::Insan(string ad, string soyad, int yas)
{
    setle(ad, soyad, yas);
}

Insan::~Insan()
{
    
}
void Insan::yazdir() const
{
    cout<<"Adı: "<<ad<<endl;
    cout<<"Soyadı: "<<soyad<<endl;
    cout<<"Yaşı: "<<yas<<endl;
}
void Insan::setle(string ad, string soyad, int yas)
{
    this->ad = ad;
    this->soyad = soyad;
    this->yas = yas;
}
