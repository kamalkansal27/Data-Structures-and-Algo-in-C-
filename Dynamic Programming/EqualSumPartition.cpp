#include<bits/stdc++.h>
using namespace std;

bool SubsetSum_MS(vector<int> arr, int sum, int n)
{
    // Base Condition
    if(n == 0 && sum == 0) return true;
    if(n != 0 && sum == 0) return true;
    if(n == 0 && sum != 0) return false;

    // Recursive call
    if(arr[n-1] > sum) 
    {
        SubsetSum_MS(arr, n-1, sum);
    }

    return SubsetSum_MS(arr, n-1, sum - arr[n-1]) || SubsetSum_MS(arr, n-1, sum);
}    
bool canPartition(vector<int>& nums) 
{
    int n = nums.size();
    
    // Calculate the sum of the array.
    long long int sum = 0;
    for(int i=0;i<nums.size();i++)
    {
        sum += nums[i];
    }
    
    // Check the sum if it is odd
    if(sum % 2 != 0) return false;
    
    return SubsetSum_MS(nums, sum/2, n);
}

int main()
{
    vector<int> arr;
    for(int i=0;i<arr.size();i++)
    {
        cin>>arr[i];
    }

    if(canPartition(arr)) cout<<"Yes, Partition is Possible."<<endl;
    else cout<<"No, Partition is not Possible."<<endl;

    return 0;
}