#ifndef bolum_hpp
#define bolum_hpp

#include "insan.hpp"
#include "ogrenci.hpp"
#include <string>
#include <stdio.h>

using namespace std;

class Bolum
{
public:
    Bolum(string, Insan [], Ogrenci []);
    void yazdir() const;
    void setle(string, Insan[], Ogrenci []);
private:
    // composition olan yer
    string bolumAdi;
    Insan hocalar[3];
    Ogrenci ogrenciler[3];
    
};
#endif /* bolum_hpp */
