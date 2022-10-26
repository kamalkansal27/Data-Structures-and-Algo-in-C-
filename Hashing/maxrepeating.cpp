#include<bits/stdc++.h>
using namespace std;

int maxRepeating(int arr[], int n, int k)
{
    map<int, int> m;
    for(int i=0;i<n;i++)
    {
        m[arr[i]]++;
    }

    int maxi = INT_MIN;
    int ans = INT_MIN;
    for(auto i:m)
    {
        if(i.second > maxi) 
        {
            maxi = i.second;
            ans = i.first;
        }
    }

    return ans;
}

int main()
{
    int arr[] = {2,2,1,2};
    
    cout<<maxRepeating(arr,4,3)<<endl;

    return 0;
}