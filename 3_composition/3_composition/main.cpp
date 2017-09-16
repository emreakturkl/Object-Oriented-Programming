//
//  main.cpp
//  3_composition
//
//  Created by Emre AKTÜRK
// 

#include <iostream>
#include <string>
#include "insan.hpp"
#include "ogrenci.hpp"
#include "bolum.hpp"

using namespace std;
int main(int argc, const char * argv[]) {
    
    Insan hocalar[3];
    hocalar[0].setle("Ahmet", "AHMET", 40);
    hocalar[1].setle("Ali", "ALI", 20);
    hocalar[2].setle("Mehmet", "MEHMET", 30);
    
    Ogrenci ogrenciler[3];
    ogrenciler[0].setle("Hasan", "HASAN", 20, "KTÜ", 2.5);
    ogrenciler[1].setle("Huseyin", "HUSEYIN", 21, "KTÜ", 3.99);
    ogrenciler[2].setle("Zafer", "ZAFER", 19, "KTÜ", 3.50);
    
    Bolum ceng("Bilgisayar Muhendisligi", hocalar, ogrenciler);
    ceng.yazdir();
    
    return 0;
}
