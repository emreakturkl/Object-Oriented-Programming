//
//  ogrenci.cpp
//  3_composition
//
//  Created by Emre AKTÜRK
//  

#include "ogrenci.hpp"
#include <string>
#include <iostream>
using namespace std;

Ogrenci::Ogrenci(string ad, string soyad, int yas, string universite, double notOrt) : Insan(ad,soyad,yas)
{
    this->universite = universite;
    this->notOrt = notOrt;
}
Ogrenci::~Ogrenci()
{
    
}
void Ogrenci::yazdir() const
{
    Insan::yazdir();
    cout<<"Üniversitesi: "<<universite<<endl;
    cout<<"Not ortalaması: "<<notOrt<<endl;
}
void Ogrenci::setle(string ad, string soyad, int yas, string uni, double notOrt)
{
    Insan::setle(ad, soyad, yas);
    this->universite = uni;
    this->notOrt = notOrt;
}
