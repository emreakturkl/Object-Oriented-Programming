#include <iostream>
using namespace std;
#include "sekil.h"
#include "daire.hpp"
#include "dikdortgen.hpp"

// polymorphic fonksiyonlar

void sekilTanistir(Sekil *p)
{
    p->tanistir();
}
double sekilAlaniHesapla(Sekil *p)
{
    return p->alanHesapla();
}
double sekilCevresiHesapla(Sekil *p)
{
    return p->cevreHesapla();
}

int main(int argc, const char * argv[]) {
    
    Sekil *dikdotrgen = new Dikdortgen(5,4); // upcasting
    Sekil *daire = new Daire(3); // upcasting
    
    sekilTanistir(dikdotrgen);
    sekilTanistir(daire);
    
    cout<<sekilAlaniHesapla(daire)<<endl;
    cout<<sekilAlaniHesapla(dikdotrgen)<<endl;
    
    cout<<sekilCevresiHesapla(daire)<<endl;
    cout<<sekilCevresiHesapla(dikdotrgen)<<endl;
    
    delete dikdotrgen;
    delete daire;
    
    return 0;
}
