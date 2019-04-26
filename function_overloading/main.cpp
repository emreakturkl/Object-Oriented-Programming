#include <iostream>
using namespace std;

int sayicarp(int, int);
int sayicarp(int, int, int);
double sayicarp(double, double);
char sayicarp(char, char);

int main(int argc, const char * argv[]) {
    
    int a=10, b= 20, c=30;
    double d = 10.5, e= 20.5;
    cout<<sayicarp(a, b)<<endl;
    cout<<sayicarp(a, b, c)<<endl;
    cout<<sayicarp(d, e)<<endl;
    return 0;
}

int sayicarp(int a, int b)
{
    return a*b;
}
int sayicarp(int a, int b, int c)
{
    return a*b*c;
}
double sayicarp(double a, double b)
{
    return a*b;
}
