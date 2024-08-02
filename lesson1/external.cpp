#include<iostream>
using namespace std;

double warming=0.3;
void update(double dt);
void local();
int main()
{
    cout<<"Glogalne ocieplenie wynosi: "<<warming<<" stopni.\n";
    update(0.1);
    cout<<"Glogalne ocieplenie wynosi: "<<warming<<" stopni.\n";
    local();
    cout<<"Glogalne ocieplenie wynosi: "<<warming<<" stopni.\n";
    cin.get();
    cin.get();

    return 0;
}