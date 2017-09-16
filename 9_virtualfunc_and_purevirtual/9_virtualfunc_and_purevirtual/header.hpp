//
//  header.hpp
//  9_virtualfunc_and_purevirtual
//
//  Created by Emre AKTÜRK
//

#ifndef header_hpp
#define header_hpp

#define ABSTRUCT 0 // ABSTRUCT CLASS
#define VIRTUAL 1 // VIRTUAL FUNCSIONS
#include <iostream>
#include <string>
using namespace std;

// -> Virtual fonksiyonlar temel sınıfta tanımlarak alt sınıflarda özelleştirilerek tekrar tanımalanabilir(override)
// -> Alt sınıflardaki getVoice fonksiyonuna kodun anlaşılabilirliği açısından virtual yazılabilir.
// -> temel sınfta virtual fonskiyon pure virtual tanımlanırsa sınıf soyut olur ve fonsiyon tanımlamaları yapılmaz.
// -> en az bir pure virtual tanımlanırsa soyut sınıf

class Animal
{
protected:
    string voice;
public:
#if !ABSTRUCT
    Animal();
#endif
    ~Animal();
#if VIRTUAL
    // virtual fonksiyon
    virtual string getVoice() { return voice; }
#else
#if ABSTRUCT
    virtual string getVoice() = 0; // pure virtual
#else
    string getVoice() { return voice; }
#endif
#endif
};

class Dog : public Animal
{
    string sign;
public:
    Dog();
    ~Dog();
    // getVoice fonksiyonun override edilmesi
    string getVoice() { return voice + " " + sign ;}
    // virtual string getVoice() { return voice + " " + sign ;}
};

class Cat : public Animal
{
    string sign;
public:
    Cat();
    ~Cat();
    // getVoice fonksiyonun override edilmesi
    string getVoice() { return voice + " " + sign ;}
};

class Cow : public Animal
{
    string sign;
public:
    Cow();
    ~Cow();
    // getVoice fonksiyonun override edilmesi
    string getVoice() { return voice + " " + sign ;}
};


#endif /* header_hpp */
