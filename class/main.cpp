#include <iostream>
#include "header.hpp"

using namespace std;

void fsetle(Sinif &nesne,int a) //friend func tanımlama
{
    nesne.a = a;
}

int main(int argc, const char * argv[]) {
    
    Sinif nesne1(20,10.5,"ali",30); //class nesnesine class instance veya object denir
    Sinif nesne2(10,20.5,"emre",40);
    
    nesne1.yazdir();
    nesne2.yazdir();
    cout<<"\n"<<nesne1.karsilastir(nesne2)<<endl;
    cout<<"\n";
    
    nesne1.setle(40, 40.5, "ibo");
    nesne2.setle(50, 50.5, "adem");
    nesne1.yazdir();
    nesne2.yazdir();
    fsetle(nesne2,100);
    
    nesne2.yazdir();
    
    return 0;
}


