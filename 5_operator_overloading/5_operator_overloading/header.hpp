//
//  header.hpp
//  5_operator_overloading
//
//  Created by Emre AKTÜRK
//

#ifndef header_hpp
#define header_hpp
#include <iostream>
#define OVERLOAD 0

using namespace std;

class opOverClass
{
    //Overload stream extracion
    friend ostream& operator<<(ostream& os, const opOverClass& object);
    //Overload stream insertion
    friend istream& operator>>(istream& is, opOverClass& object);

public:
    //Default constructor
    opOverClass();
    //Parameter constructor
    opOverClass(int a, int b, int c[]);
    //Deconstructor
    ~opOverClass();
    
    //Copy constructor(Deep Copy)
    opOverClass(const opOverClass& object); //copy constructor with reference
    opOverClass(const opOverClass* object); //copy constructor with address
    
    
    int get_a();
    int get_b();
    int get_c(int index);
    

    //Overload +
    opOverClass operator+(const opOverClass& object);
    
    //Overload assignment operator
    const opOverClass& operator=(const opOverClass* object); // assignment from a pointer
    const opOverClass& operator=(const opOverClass& object);  // assignment from a reference
    
#if OVERLOAD
    const bool operator==(const opOverClass& otherObject);
    
    opOverClass operator++(); // önce artır sonra yaz(preincrement)
    opOverClass operator++(int); // yaz sonra artır (pastincrement)
    
    // friend fonksiyonlar
#else
    friend bool operator==(const opOverClass & object1, const opOverClass& object2);
    friend opOverClass operator*(opOverClass object1, opOverClass object2);
    friend opOverClass operator++(opOverClass& object);
    friend opOverClass operator++(opOverClass& object, int);
#endif
private:
    double a;
    double b;
    int *c;
};


#endif /* header_hpp */
