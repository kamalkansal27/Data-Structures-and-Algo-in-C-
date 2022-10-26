#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;  cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];

    vector<int> jump(n,INT_MAX);
    jump[0] = 0;

    if(arr[0] == 0)
    {
        for(int i=0;i<n;i++)
        {
            cout<<jump[i]<<" ";
        }
        cout<<endl;
        return 0;
    }
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(i<=(j+arr[j]))
            {
                jump[i] = min(jump[i], jump[j] + 1);
            }
        }
    }
    cout<<jump[n-1]<<endl;

    return 0;
}