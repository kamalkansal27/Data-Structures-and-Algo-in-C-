// Print numbers till the given interger N.

#include<bits/stdc++.h>
using namespace std;

// Increasing Order.
void PrintINC(int n)
{
    if(n == 0) return;
    PrintINC(n-1);
    cout<<n<<" ";
}
void PrintDEC(int j)
{
    if(j == 0) return;

    cout<<j<<" ";
    PrintDEC(j-1);
}

int main()
{
    int n; cin>>n;

    PrintDEC(n);
    cout<<endl;
    PrintINC(n);
    cout<<endl;

    return 0;
}