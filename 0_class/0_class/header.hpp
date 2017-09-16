//
//  header.hpp
//  0_class
//
//  Created by Emre AKTÜRK
//

/* Hiding Information .h */

#ifndef header_hpp
#define header_hpp

#include <string>

/*
 
 Abstruct Data Type(ADT) Soyut Veri Tipi
 1-Type Name : Class İsmi
 2-Domain : Üye Değişkenler
 3-Operations : Üye Fonksiyonlar
 
 */


class Sinif // ClassAdi İlk Harf Büyük
{
    friend void fsetle(Sinif &, int);
    /* -classın üyesi olmadı halde tüm verilerine erişir global bir fonksiyondur.
     
        -friend fonk ne işe yarar iki classın degişkenleri dışarıdan karşılastırlabilir
     */
    
public:
    Sinif(); // default constructor
    // constructorların geri dönüş tipi yoktur
    Sinif(int = 0, double = 0.0, std::string = "",int = 0); // parametreli constructor
    //Birden fazla contructer tanımlanabilir; tek parametreli,iki parametreli . . .
    
    ~Sinif(); //deconstructor  = nesne ile iş bittiginde bellekten siler
    
    void setle(int , double, std::string);
    void yazdir() const; // const verileri değiştirmemesi için
    bool karsilastir(const Sinif &digerSinif) const;
    //passed by reference asıl değişkenler kullanılır
    
protected:
    
private: // class ta default privattır structta publictir
    int a;
    double b;
    std::string c;
    const int d; //const bir veriyi constructor da tanımlama
};

#endif /* header_hpp */
