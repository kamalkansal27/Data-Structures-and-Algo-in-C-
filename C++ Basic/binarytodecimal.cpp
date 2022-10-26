#include<bits/stdc++.h>
using namespace std;

int convertToDecimal(string s, int n){
    int i,N,decimal_number=0,p=0;
    N=s.size(); // storing the size of string in N
    for(i=N-1;i>=0;i--) // starting the loop from LSB
    {
        if(s[i]=='1') // Checking if string element is 1
        {
            decimal_number+=pow(2,p); // if yes, adding the pth power of 2 to the decimal_number
        }
        p++; // incrementing the value of p as we move towards MSB
    }
    return decimal_number;
}

int main()
{
    cout<<convertToDecimal("1000", 3)<<endl;
    return 0;
}