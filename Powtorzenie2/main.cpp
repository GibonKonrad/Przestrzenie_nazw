#include<iostream>
#include<new>
#include<cstring>

using namespace std;
struct chaff
{
    char dross[20];
    int slag;
};
const int len=4;
void Fill(chaff & g,char dross[20], int slag);
void show(chaff & g);
int main()
{
    chaff tablica1[len];
    chaff* tablica=new (tablica1) chaff[2];
    char dross[20];
    int slag;
    for(int i=0; i<2; i++)
    {
        cout<<"Podaj nazwe: ";
        cin>>dross;
        cout<<"\nPodaj ilosc: ";
        cin>>slag;
        Fill(tablica[i], dross, slag);
    }
    for(int i=0; i<2; i++)
    {
        show(tablica[i]);
    }
    cin.get();
    cin.get();
    return 0;
}
void Fill(chaff & g, char dross[20], int slag)
{
    strcpy(g.dross,dross);
    g.slag=slag;
}
void show(chaff & g)
{
    cout<<"Nazwa: "<<g.dross<<endl;
    cout<<"Ilosc: "<<g.slag<<endl;
}