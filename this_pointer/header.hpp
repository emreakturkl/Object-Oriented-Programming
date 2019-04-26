#ifndef header_hpp
#define header_hpp

/* This Pointerı fonksiyonları art arda  kullanılmasını sağlar */

class Eksen
{
public:
    Eksen(int = 0, int = 0, int =0);
    ~Eksen();
    Eksen &ayarla(int, int, int);
    Eksen &xayarla(int);
    Eksen &yayarla(int);
    Eksen &zayarla(int);
    
    int xyazdir();
    int yyazdir();
    int zyazdir();
private:
    int x;
    int y;
    int z;
};

#endif /* header_hpp */
