// To find the kth largest subarray sum from the given array.
#include<bits/stdc++.h>
using namespace std;

int getKthLargest(vector<int> arr, int k)
{
    // if(arr.size() == 0) return 0;

    vector<int> sums;
    for(int i=0;i<arr.size();i++)
    {
        int sum = 0;
        for(int j=i;j<arr.size();j++)
        {
            sum += arr[j];
            sums.push_back(sum);
        }
    }

    sort(sums.begin(), sums.end());

    return sums[sums.size() - k];
}

int main()
{
    int n;
    cin>>n;

    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<getKthLargest(arr,1)<<endl;

    return 0;
}