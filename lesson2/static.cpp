#include<iostream>
const int ArSize=10;

void strcount(const char * str);

int main()
{
    using namespace std;
    char input[ArSize];
    char next;
    cout<<"Wprowadz wiersz: \n";
    cin.get(input,ArSize);
    while(cin)
    {
        cin.get(next);
        while(next!='\n')
            cin.get(next);
        strcount(input);
        cout<<"Wprowadz nastepny wiersz (wiersz pusty kaoonczy wproowadzanie):\n";
        cin.get(input,ArSize);
    }
    cout<<"KJoniec\n";
    cin.get();
    cin.get();
    return 0;
}
void strcount(const char * str)
{
    using namespace std;
    static int total=0;
    int count=0;
    cout<<"\""<<str<<"\" zawiera ";
    while(*str++)
        count++;
    total+=count;
    cout<<count<<" znakow\n";
    cout<<" Łacznie "<<total<<" znakow\n";
}