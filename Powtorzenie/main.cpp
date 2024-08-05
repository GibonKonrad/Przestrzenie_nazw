#include<iostream>
#include"golf.h"
int main()
{
    using namespace std;
    golf tablica_str[3];
    for(int i=0; i<3; i++)
    {
        setgolf(tablica_str[i]);
    }
    for(int i=0; i<3; i++)
    {
        showgolf(tablica_str[i]);
    }
    cin.get();
    cin.get();
    return 0;
}