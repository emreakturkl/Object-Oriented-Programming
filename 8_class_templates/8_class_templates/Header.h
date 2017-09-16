//
//  Header.h
//  8_class_templates
//
//  Created by Emre AKTÜRK
//

#ifndef Header_h
#define Header_h

#include <iostream>
using namespace std;

//Template sınıflarda header ve cpp dosyası tek dosyada yazılır

template <class T>
class Sinif
{
    T x;
    T y;
public:
    Sinif(T x,T y);
    ~Sinif();
    void yazdir() const;
    void setle(T x, T y);
};

template <class T>
Sinif<T>::Sinif(T x, T y)
{
    this->x = x;
    this->y = y;
}

template <class T>
Sinif<T>::~Sinif()
{
    
}
template <class T>
void Sinif<T>::yazdir() const
{
    cout<<"x: "<<x<<"\n"<<"y: "<<y<<endl;
}
template <class T>
void Sinif<T>::setle(T x, T y)
{
    this->x = x;
    this->y = y;
}


#endif /* Header_h */
