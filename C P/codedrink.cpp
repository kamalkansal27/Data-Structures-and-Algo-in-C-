#include<bits/stdc++.h>
using namespace std;

int main()
{   
    
    int n;
    cin>>n;

    int reverse = 0;
    while(n > 0){
        int ld = n % 10;
        reverse = reverse*10 + ld;
        n = n/10;
    }
    cout<<reverse<<endl;

    
    while(n > 0){
        int digit = n % 10;
        while(digit > 1){
            if(digit % 2){
                cout<<0;
            }
            digit = digit / 2;
        }
        cout<<1;
    }
    return 0;
}