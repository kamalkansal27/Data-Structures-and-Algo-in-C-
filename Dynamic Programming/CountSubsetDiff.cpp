// To count the no. of ways when the difference between the subsets is equal to given difference.
#include<bits/stdc++.h>
using namespace std;

int CountSubset(int arr[], int sum, int n)
{
    int DP[n+1][sum+1];
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<sum+1;j++)
        {
            // Intialisation.
            if(i == 0 && j == 0) DP[i][j] = 1;
            else if(i != 0 && j == 0) DP[i][j] = 1;
            else if(i == 0 && j != 0) DP[i][j] = 0;  

            // Recurrence Code.
            else if(arr[i-1] > j)
            {
                // Exclude.
                DP[i][j] = DP[i-1][j];
            }
            else if(arr[i-1] <= j)
            {
                DP[i][j] = DP[i-1][j] + DP[i-1][j-arr[i-1]];
            }
        }
    }

    return DP[n][sum];
}

int CountSubsetDiff(int arr[], int n, int diff)
{
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum += arr[i];
    }

    int s = (diff + sum) / 2;
    int count = CountSubset(arr, s, n);

    return count;
}

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int diff;
    cin>>diff;

    cout<<CountSubsetDiff(arr, n, diff)<<endl;
    
    return 0;
}