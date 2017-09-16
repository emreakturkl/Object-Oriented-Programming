//
//  header.cpp
//  5_operator_overloading
//
//  Created by Emre AKTÜRK
//

#include "header.hpp"

opOverClass::opOverClass()
{
    a = 10;
    b = 10;
    c = new int[10];
}
//copy constructor with reference(Deep Copy)
opOverClass::opOverClass(const opOverClass& object)
{
    a = object.a;
    b = object.b;
    c = new int[10];
    for(int i = 0;i<10;i++)
        this->c[i] = object.c[i];
}
//copy constructor with address(Deep Copy)
opOverClass::opOverClass(const opOverClass* object)
{
    a = object->a;
    b = object->b;
    c = new int[10];
    for(int i = 0;i<10;i++)
        this->c[i] = object->c[i];
}

opOverClass::opOverClass(int a, int b, int c[10]){
    this->a = a;
    this->b = b;
    this->c = new int[10];
    for(int i=0;i<10;i++)
        this->c[i] = c[i];
}

opOverClass opOverClass::operator+(const opOverClass& object)
{
    opOverClass temp;
    temp.a = this->a + object.a;
    temp.b = this->b + object.b;
    return temp;
}

const opOverClass& opOverClass::operator=(const opOverClass& object)
{
    this->a = object.a;
    this->b = object.b;
    for (int i = 0; i < 10; i ++)
        this->c[i] = object.c[i];

    return *this;
}

const opOverClass& opOverClass::operator=(const opOverClass* object)
{
    this->a = object->a;
    this->b = object->b;
    for (int i = 0; i < 10; i ++)
        this->c[i] = object->c[i];
    
    return *this;
}

#if OVERLOAD
const bool opOverClass::operator==(const opOverClass & otherObject)
{
    return (this->a == otherObject.a && this->b == otherObject.b);
}

// ++a
opOverClass opOverClass::operator++()
{
    ++a;
    ++b;
    return *this;
}
// a++
opOverClass opOverClass::operator++(int)
{
    opOverClass temp = *this;
    a++;
    a++;
    
    /*
     Böyle olsada farketmez
     ++a;
     ++b;
     */
    
    return temp;
    //aradaki temp nesnesi önce döndürür
}

// friend fonksiyonlar

#else
bool operator==(const opOverClass & object1, const opOverClass& object2)
{
    return (object1.a == object2.a && object1.a == object2.b);
}

opOverClass operator*(opOverClass object1, opOverClass object2)
{
    opOverClass temp;
    temp.a = object1.a * object2.a;
    temp.b = object1.b * object2.b;
    return temp;
}

opOverClass operator++(opOverClass& object)
{
    ++object.a;
    ++object.b;
    return object;
}
opOverClass operator++(opOverClass& object, int)
{
    opOverClass temp = object;
    object.a++;
    object.b++;
    return temp;
}

#endif
// Stream

ostream& operator<<(ostream& os, const opOverClass& object)
{
    os<<"a: "<<object.a<<endl;
    os<<"a: "<<object.b<<endl;
    return os;
}
istream& operator>>(istream& is, opOverClass& object)
{
    is>>object.a;
    is>>object.b;
    return is;
}

int opOverClass::get_a(){
    return a;
}
int opOverClass::get_b(){
    return b;
}
int opOverClass::get_c(int index){
    return c[index];
}
opOverClass::~opOverClass()
{
    delete [] c;
    //dtor
}
