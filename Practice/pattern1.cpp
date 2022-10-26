//     *
//    **
//   ***
//  ****
// *****

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        int j = 1;
        while(j<=n-i)
        {
            cout<<" ";
            j++;
        }
        while(j<=n)
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
    }

    return 0;
}
