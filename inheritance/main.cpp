#include <iostream>
#include "baseclass.hpp"
#include "derivedclass.hpp"

using namespace std;
int main(int argc, const char * argv[]) {
    
    BaseClass bnesne("Emre", "AKTURK", 20, 1234);
    DerivedClass dnesne("Emre","BERBER",20,2345,"KTÜ",12121);
    dnesne.yazdir();
    bnesne.yazdir();
    dnesne.sayi = 10; // DerivedClassı protected veya private yapsaydık erişemezdik
    cout<<dnesne.sayi<<endl;
    return 0;
}
