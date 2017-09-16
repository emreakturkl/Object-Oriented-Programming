//
//  baseclass.cpp
//  2_inheritance(kalıtım)
//
//  Created by Emre AKTÜRK 
//  

#include "baseclass.hpp"
#include <iostream>

using namespace std;

BaseClass::BaseClass(std::string ad, std::string soyad, int yas, int kimlikNo)
{
    setle(ad,soyad,yas,kimlikNo);
}

void BaseClass::setle(std::string ad, std::string soyad, int yas, int kimlikNo)
{
    this->ad = ad;
    this->soyad = soyad;
    this->yas = yas;
    this->kimlikNo = kimlikNo;
    
}

void BaseClass::yazdir() const
{
    cout<<"adı: "<<ad<<endl;
    cout<<"soyadı: "<<soyad<<endl;
    cout<<"yaşı: "<<yas<<endl;
    cout<<"TC Kimlik No: "<<kimlikNo<<endl;
}

void BaseClass::kimlikNoSetle(int kimlikNo)
{
    this->kimlikNo = kimlikNo;
}
