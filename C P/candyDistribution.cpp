#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int t;
    cin>>t;

    for(int j=0;j<t;j++)
    {
        int n, m;
        cin>>n>>m;  

        int candy[n];
        int totalCandy = 0;
        for(int i=0;i<n;i++)
        {
            cin>>candy[i];
            totalCandy += candy[i];
        }

        int remaining = totalCandy % m;
        
        cout<<"Case #"<<j<<" :"<<remaining<<endl; 
    }

    return 0;
}