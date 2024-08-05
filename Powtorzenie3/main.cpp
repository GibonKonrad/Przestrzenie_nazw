#include<iostream>
#include"sales.h"

int main()
{
    using namespace SALES;
    Sales object1, object2;
    setSales(object1);
    double tab[3]{1,2,3};
    setSales(object2, tab, 3);
    showSales(object1);
    showSales(object2);
    cin.get();
    cin.get();
    return 0;
}