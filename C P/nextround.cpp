#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin>>n>>k;

    int check;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(i+1 == k) check = arr[i];
    }

    int ans = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i] > 0 and arr[i] >= check) ans ++;
    }
    cout<<ans<<endl;

    return 0;
}