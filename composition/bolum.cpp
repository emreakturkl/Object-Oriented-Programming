#include "bolum.hpp"
#include <string>
#include <iostream>

using namespace std;

Bolum::Bolum(string bolumAdi, Insan hocalar[3], Ogrenci ogrenciler[3])
{
    this->bolumAdi = bolumAdi;
    for(int i = 0; i<3; i++)
    {
        this->hocalar[i] = hocalar[i];
        this->ogrenciler[i] = ogrenciler[i];
    }
}

void Bolum::yazdir() const
{
    cout<<"Bölümün adı: "<<bolumAdi<<endl;;
    cout<<"Öğrenci listemiz"<<endl;
    for(int i=0; i<3; i++)
        ogrenciler[i].yazdir();
    cout<<"Hocalar"<<endl;
    for(int i=0; i<3; i++)
        hocalar[i].yazdir();
}
void Bolum::setle(string bolumAdi, Insan hocalar[3], Ogrenci ogrenciler[3])
{
    this->bolumAdi = bolumAdi;
    for(int i=0; i<3; i++)
        ogrenciler[i] = ogrenciler[i];
    for(int i=0; i<3; i++)
        hocalar[i] = hocalar[i];
}


        
