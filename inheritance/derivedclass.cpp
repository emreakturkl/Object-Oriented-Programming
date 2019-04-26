#include "derivedclass.hpp"
#include <iostream>
using namespace std;

DerivedClass::DerivedClass(string ad, string soyad, int yas, int kimlikNo, string universite, double notOrtalama) : BaseClass(ad, soyad, yas, kimlikNo)
{
    this->universite = universite;
    this->notOrtalama = notOrtalama;
}

void DerivedClass::yazdir() const
{
    BaseClass::yazdir();
    cout<<"üniversitesi: "<<universite<<endl;
    cout<<"not ortalaması: "<<notOrtalama<<endl;
    cout<<"deneme:"<<kimlikNo<<endl;
}

void DerivedClass::setle(string ad, string soyad, int yas, int kimlikNo, string universite, double notOrtalama)
{
    BaseClass::setle(ad, soyad, yas, kimlikNo);
    this->universite = universite;
    this->notOrtalama = notOrtalama;
}
