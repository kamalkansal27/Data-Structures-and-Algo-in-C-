// 1
// 01
// 010
// 1010
// 10101

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    bool k = 1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<k;
            k = !k;
        }
        cout<<endl;
    }

    return 0;
}