// to check if any three elements in the array is equal to target or not.

#include<bits/stdc++.h>
using namespace std;

// Complexity :- O(n^3)
bool ThreeSum(vector<int> arr, int target)
{
    int n = arr.size();
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(arr[i] + arr[j] + arr[k] == target) return true;
            }
        }
    }
    return false;
}

// Complexity :- O(n^2)
bool Found(vector<int> arr, int target)
{
    int n = arr.size();
    sort(arr.begin(), arr.end());
    
    for(int i=0;i<n;i++)
    {
        int l = i+1; int r = n-1;
        while(l < r)
        {
            int sum = arr[i] + arr[l] + arr[r];
            if(sum == target) return true;
            else if(sum < target) l++;
            else r--;
        }
    }
    return false;
}

int main()
{
    if(ThreeSum({1,2,3,4,5}, 0)) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

    if(Found({1,2,3,4,5}, 6)) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

    return 0;
}