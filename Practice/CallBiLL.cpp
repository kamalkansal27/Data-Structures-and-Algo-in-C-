#include<bits/stdc++.h>
using namespace std;

float RentBill(int calls)
{
    float rent = 120;
    
    if(calls > 100 && calls <= 250)
    {
        rent = rent + (100 * 0) + ((calls - 100)*0.80);
        return rent; 
    }
    
    if(calls > 250 && calls <= 500)
    {
        rent = rent + (100 * 0) + (150 * 0.80) + ((calls - 250) * 1.00);
        return rent;
    }

    if(calls > 500 && calls <= 800)
    {
        rent = rent + (100 * 0) + (150 * 0.80) + (250 * 1.00) + ((calls - 500) * 1.20);
        return rent;
    }

    if(calls > 800)
    {
        rent = rent + (100 * 0) + (150 * 0.80) + (250 * 1.00) + (300 * 1.20) + ((calls - 800) * 1.50);
        return rent;
    }

    return rent;
}

int main()
{   
    int calls;
    cin>>calls;

    cout<<RentBill(calls)<<endl;

    return 0;
}