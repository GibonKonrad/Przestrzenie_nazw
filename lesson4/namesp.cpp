#include<iostream>
#include"namesp.h"
namespace pers
{
    using std::cout;
    using std::cin;
    void getPerson(Person & rp)
    {
        cout<<"Podaj imie: ";
        cin>>rp.fname;
        cout<<"Podaj nazwisko: ";
        cin>>rp.lname;
    }

    void showPerson(const Person & rp)
    {
        cout<<rp.lname<<", "<<rp.fname;
    }
}

namespace debts
{
    void getDebt(Debt & rd)
    {
        getPerson(rd.name);
        std::cout<<" Podaj kwote: ";
        std::cin>>rd.amount;
    }
    void showDebt(const Debt & rd)
    {
        showPerson(rd.name);
        std::cout<<": "<<rd.amount<<" zl"<<std::endl;
    }
    double sumDebts(const Debt ar[], int n)
    {
        double total=0;
        for(int i=0; i<n; i++)
            total+=ar[i].amount;
        return total;
    }
}