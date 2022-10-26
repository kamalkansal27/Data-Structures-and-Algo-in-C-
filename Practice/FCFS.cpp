#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    vector<int> et(n);
    for(int i=0;i<n;i++)
    {
        cin>>et[i];
    }

    vector<int> wt;
    wt[0] = 0;

    int sum = 0;
    for(int i=1;i<et.size();i++)
    {
        wt[i] = wt[i-1] + et[i-1];
        sum += wt[i];
    }

    float avgwt = sum/et.size();
    cout<<avgwt<<endl;

    return 0;
}