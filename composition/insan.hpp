#ifndef insan_hpp
#define insan_hpp

#include <string>
using namespace std;

class Insan{
public:
    Insan(string = "", string = "", int = 0 );
    ~Insan();
    void yazdir() const;
    void setle(string, string, int);
private:
    string ad, soyad;
    int yas;
};
#endif /* insan_hpp */
