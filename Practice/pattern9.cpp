// A A A
// B B B
// C C C

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    char p = 'A';
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<p<<" ";
        }
        cout<<endl;
        p ++;
    }

    return 0;
}