//
//  main.cpp
//  5_operator_overloading
//
//  Created by Emre AKTÜRK
//
#include <iostream>
#include "header.hpp"
using namespace std;

int main()
{
    int array[10]={1,2,3,4,5,6,7,8,9,0};
    
    opOverClass a(10, 20,array);
    opOverClass b(30, 40,array);
    /**/
    opOverClass c[4]; // opOverClass dizisi
    for(int i = 0; i < 4; i ++)
        c[i] = new opOverClass(); //bellekte opOverClass classından yer ayırıyoruz.
    /**/
    opOverClass d(a);  // Copy Constructor with reference
    opOverClass e(&b); // Copy Constructor with pointer
    
    /**/
    opOverClass *f = new opOverClass(50,60,array); // pointer inizilation constructer
    /**/
    opOverClass h; //default object
    
    /*
    cout<<a.get_a()<<endl;
    cout<<a.get_b()<<endl;
    cout<<a.get_c(0)<<endl;
     
    */
     
    // assignment from a reference
    /*
    c[0] = a;
    c[1] = b;
    
    cout<<c[0].get_a()<<endl;
    cout<<c[0].get_b()<<endl;
    cout<<c[0].get_c(0)<<endl;
    
    cout<<c[1].get_a()<<endl;
    cout<<c[1].get_b()<<endl;
    cout<<c[1].get_c(0)<<endl;
    */
    
    // assignment from a pointer
    
    /*
    c[2] = &a;
    c[3] = &b;
    
    cout<<c[2].get_a()<<endl;
    cout<<c[2].get_b()<<endl;
    cout<<c[2].get_c(0)<<endl;
    
    cout<<c[3].get_a()<<endl;
    cout<<c[3].get_b()<<endl;
    cout<<c[3].get_c(0)<<endl;
    */
    
    /*
    cout<<d.get_a()<<endl;
    cout<<d.get_b()<<endl;
    cout<<d.get_c(0);
    */
    
    /*
    cout<<e.get_a()<<endl;
    cout<<e.get_b()<<endl;
    cout<<e.get_c(0);
    */
    
    /*
    cout<<f->get_a()<<endl;
    cout<<f->get_b()<<endl;
    cout<<f->get_c(0);
    */
    
    //overload +
    /*
    cout<<(a+b).get_a()<<endl;
    h = (a+b);
    
    cout<<h.get_a()<<endl;
    cout<<h.get_b()<<endl;
    cout<<h.get_c(0)<<endl;
    */
    
    //overload ==
    
    /*
    if(a == b)
        cout<<"1"<<endl;
    else
        cout<<"0"<<endl;
    */
    
    // overload a++ ve ++a
    /*
    cout<<(a++).get_a()<<endl;
    cout<<a.get_a()<<endl;
    cout<<(++a).get_a()<<endl;
     */
    
    //friend fonksiyon kullanımları
    /*
    cout<<(a+b).get_a()<<endl;
    cout<<(a*b).get_a()<<endl;
    cout<<(a==b)<<endl;
    cout<<(a++).get_a()<<endl;
    cout<<(++a).get_a()<<endl;
    */
    
    // stream
    /*
    cout<<"gir: "<<endl;
    cin>>a;
    cout<<a;
    */
    return 0;
}
