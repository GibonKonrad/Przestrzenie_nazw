#include"sales.h"
#include<iostream>
namespace SALES
{
    void setSales(Sales &s, const double ar[], int n)
    {

        for(int i=0; i<n; i++)
        {
            s.sales[i]=ar[i];
        }  
        double max=s.sales[0];
        double min=s.sales[0];
        double average=0;
        for(int i=0; i<4; i++)
        {
            if(max<s.sales[i])
                max=s.sales[i];
            if(min>s.sales[i])
                min=s.sales[i];
            average+=s.sales[i];
        }
        average/=n;
        s.max=max;
        s.min=min;
        s.average=average;         
    }
    void setSales(Sales &s)
    {
        double tab[4];
        cout<<"Podaj 4 inforamcje: "<<endl;
        for(int i=0; i<4; i++)
            cin>>tab[i];
        setSales(s, tab, 4);
    }
    void showSales(const Sales &s)
    {
        for(int i=0; i<4; i++)
        {
            cout<<"Element "<<i<<" to "<<s.sales[i]<<endl;
        }
        cout<<"Max= "<<s.max<<endl;
        cout<<"Min= "<<s.min<<endl;
        cout<<"Average= "<<s.average<<endl;
    }
}