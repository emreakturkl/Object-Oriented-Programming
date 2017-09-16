//
//  main.cpp
//  4_operator_overloading
//
//  Created by Emre AKTÜRK
//
class Integer
{
    int nr;
    public:
    Integer() { };
    Integer(int);
    operator int();
    int operator+=(Integer);
    int getNr() { return nr; };
};

Integer::Integer(int nr) {this->nr = nr;};

Integer::operator int()
{
    return this->nr;
}

int Integer::operator+=(Integer a)
{
    this->nr += a.nr;
    return *this;
}

#include <iostream>
#include <stdlib.h>
#define STRING_OVERLOAD 0
using namespace std;
/* CONVERT constructor - overloading operators */
int main()
{
#if STRING_OVERLOAD
    
    string myStr = "test 1 ";
    //string class overload + operator
    //string sinifi + operatorunun (ustune)tekrar yuklemis
    string myStr1 = myStr + "test 2";
    
    cout << myStr1 << endl;
#else //Our integer class and overloading operators
    // Bizim Integer sinifimiz ve operatorleri tekrar yuklemek.
    Integer a(50);
    
    int b = (int)a; //Convert Constructor Working here.
    a = 100;
    cout << a.getNr() << endl;
    cout << b << endl;
    cout << a + b << endl;//Convert Constructor Working here too.
    
    b += a; // a = a + b; //Operator overloading working here.
    
    cout << b << " " << a << endl;
#endif
    return 0;
}

