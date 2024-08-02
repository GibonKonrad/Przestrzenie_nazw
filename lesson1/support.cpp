#include<iostream>
#include"pliczek.h"
using namespace std;
extern double warming;
using std::cout;

void update(double dt)
{
    extern double warming;
    warming+=dt;
    cout<<"Zwiekszam parametr ocieplenia do "<<warming;
    cout<<" stopni"<<endl;
}
void local()
{
    double warming=0.8;
    cout<<"Lokalne ocieplenie wynosi: "<<warming<<" stopni\n";
    cout<<"Ale globalne ma wartosc "<<::warming;
    cout<<" stopni.\n";
}