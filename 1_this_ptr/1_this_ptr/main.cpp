//
//  main.cpp
//  1_this_ptr
//
//  Created by Emre AKTÜRK
//

#include <iostream>
#include "header.hpp"

using namespace std;
int main(int argc, const char * argv[])
{
    Eksen cisim;
    cisim.xayarla(10).yayarla(20).zayarla(40).ayarla(50, 60, 70); // örnek kullanımı s
    cout << "x:"<<cisim.xyazdir()<<"y:"<<cisim.yyazdir()<<"z:"<<cisim.zyazdir()<<endl;
    return 0;
}
