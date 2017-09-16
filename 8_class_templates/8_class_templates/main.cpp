//
//  main.cpp
//  8_class_templates
//
//  Created by Emre AKTÜRK
//

#include <iostream>
#include "Header.h"
using namespace std;

int main(int argc, const char * argv[]) {
    Sinif<int> nesne(10,20);
    Sinif<double> nesne1(10.5, 10.6);
    nesne.yazdir();
    nesne1.yazdir();
    
    return 0;
}
