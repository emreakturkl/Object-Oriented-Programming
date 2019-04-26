#include <iostream>
using namespace std;

template <class T>
T sayilariTopla(T sayi1, T sayi2)
{
    return sayi1+sayi2;
}

template <class T, class T1>
T sayilariCarp(T sayi1, T1 sayi2)
{
    return sayi1*sayi2;
}

int main(int argc, const char * argv[]) {
    
    int sayi1=15, sayi2=20;
    double sayi3=10.5, sayi4=10.6;
    
    cout<<sayilariTopla(sayi1, sayi2)<<endl;
    cout<<sayilariTopla(sayi3, sayi4)<<endl;
    cout<<sayilariCarp(sayi1, sayi3)<<endl;
    
    return 0;
}
