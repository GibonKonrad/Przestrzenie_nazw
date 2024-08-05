#include"golf.h"
#include<iostream>
#include<cstring>
void setgolf(golf & g, const char *name, int hc)
{
    strcpy(g.fullname,name);
    g.handicap=hc;
}
void setgolf(golf & g)
{
    using namespace std;
    cout<<"Podaj swoje imie i nazwisko: "<<endl;
    cin.getline(g.fullname,Len);
    cout<<"Podaj handicap: "<<endl;
    int hc;
    cin>>hc;
    cin.get();
    handicap(g,hc);
}
void handicap(golf & g, int hc)
{
    g.handicap=hc;
}
void showgolf(const golf & g)
{
    using namespace std;
    cout<<"Imie i nazwkisko: "<<g.fullname<<endl;
    cout<<"Handicap: "<<g.handicap<<endl;
}