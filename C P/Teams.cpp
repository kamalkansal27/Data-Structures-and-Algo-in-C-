#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int count = 0;

    for(int i=0;i<n;i++)
    {
        int arr[3];
        int sum = 0;
        for(int j=0;j<3;j++)
        {
            cin>>arr[j];
            sum += arr[j];
        }
        if(sum >= 2) count++;
    }
    cout<<count<<endl;

    return 0;
}