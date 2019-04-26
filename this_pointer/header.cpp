#include "header.hpp"

Eksen::Eksen(int x, int y, int z)
{
    this->x = x;
    this->y = y;
    this->z = z;
}
Eksen::~Eksen()
{
    
}

Eksen &Eksen::ayarla(int x, int y, int z)
{
    xayarla(x);
    yayarla(y);
    zayarla(z);
    
    return *this;
}

Eksen &Eksen::xayarla(int x)
{
    this-> x = x;
    return *this;
}

Eksen &Eksen::yayarla(int y)
{
    this->y = y;
    return *this;
}

Eksen &Eksen::zayarla(int z)
{
    this->z = z;
    return *this;
}

int Eksen::xyazdir()
{
    return x;
}
int Eksen::yyazdir()
{
    return y;
}
int Eksen::zyazdir()
{
    return z;
}
