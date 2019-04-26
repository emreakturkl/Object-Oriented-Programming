#ifndef derivedclass_hpp
#define derivedclass_hpp

#include <string>
#include "baseclass.hpp"

/*
 -> Kalıtım alma işlemi public protected ve private ile olur. 
 -> class DerivedClass : BaseClass gibi yazarsak private olur.
 -> public olursa baseclassın verilerine mainde public olur
 -> protected olursa baseclassın public verileri mainde protected olur.
 -> private olursa veriler private olur.
 */

class DerivedClass : public BaseClass
{
public:
    DerivedClass(std::string, std::string, int, int, std::string, double);
    void yazdir() const;
    void setle(std::string, std::string, int, int, std::string, double);
private:
    std::string universite;
    double notOrtalama;
};
#endif /* derivedclass_hpp */
