#ifndef ogrenci_hpp
#define ogrenci_hpp

#include "insan.hpp"
#include <string>
using namespace std;

class Ogrenci : public Insan
{
public:
    Ogrenci(string = "", string= "", int = 0, string = "", double = 0);
    ~Ogrenci();
    void yazdir() const;
    void setle(string, string, int, string, double);
private:
    string universite;
    double notOrt;
};


#endif /* ogrenci_hpp */
