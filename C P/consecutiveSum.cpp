#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; 
    cin>>t;

    for(int i=0;i<t;i++)
    {
        int n, k;
        cin>>n>>k;

        int arr[n];
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }

        for(int j=0;j<n;j++)
        {
            int mod = j % k;
            if(arr[mod] < arr[j])
            {
                int temp = arr[mod];
                arr[mod] = arr[j];
                arr[j] = temp;
            }
        }
        long long int sum = 0;
        for(int j=0;j<k;j++)
        {
            sum += arr[j];
        }
        cout<<sum<<endl;
    }

    return 0;
}