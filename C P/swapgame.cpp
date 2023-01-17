#include<bits/stdc++.h>
using namespace std;

string solve(int n, int arr[])
{
    int mini = INT_MAX;
    for(int i=0;i<n;i++){
        mini = min(mini, arr[i]);
    }
    if(mini == arr[0]){
        return "BOB";
    }
    return "ALICE";
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        cout<<solve(n, arr)<<endl;
    }
    return 0;
}