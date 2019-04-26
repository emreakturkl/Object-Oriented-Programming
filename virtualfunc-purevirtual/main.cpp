#include <iostream>
#include "header.hpp"
using namespace std;

int main(int argc, const char * argv[])
{
    Animal kaplan;
    cout<<kaplan.getVoice()<<endl;
    
    Dog kopek;
    cout<<kopek.getVoice()<<endl;
    
    Cat kedi;
    cout<<kedi.getVoice()<<endl;
    
    Cow inek;
    cout<<inek.getVoice()<<endl;
    return 0;
}
