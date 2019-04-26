#ifndef baseclass_hpp
#define baseclass_hpp

#include <string>
class BaseClass
{
public:
    BaseClass(std::string, std::string, int, int);
    void yazdir() const;
    void kimlikNoSetle(int);
    void setle(std::string, std::string, int, int);
    int sayi;
    
protected: // protected mainden erişilmez ama kalıtım alan sınıftan erişilir.
    int kimlikNo;
private:
    std::string ad, soyad;
    int yas;
    
};


#endif /* baseclass_hpp */
