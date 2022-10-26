#include<bits/stdc++.h>
using namespace std;

vector<int> GetRange(int arr[], int n, int sum)
{
    bool DP[n+1][sum+1];
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<sum+1;j++)
        {
            // Intialisation.
            if(j == 0) DP[i][j] =  true;
            else if(i == 0) DP[i][j] = false;

            else if(arr[i-1] > j)
            {
                DP[i][j] = DP[i-1][j];
            }
            else if(arr[i-1] <= j)
            {
                DP[i][j] = DP[i-1][j-arr[i-1] || DP[i-1][j]];
            }
        }
    }

    vector<int> range;
    for(int i=n;i<n+1;i++)
    {
        for(int j=0;j<sum+1;j++)
        {
            if(DP[i][j] == true)
            {
                range.push_back(arr[j]);
            }
        }
    }
    return range;
}

int MinSubsetDiff(int arr[], int n)
{
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum += arr[i];
    }

    vector<int> range = GetRange(arr, n, sum);

    int mindiff = INT_MAX;
    for(int i=0;i<range.size();i++)
    {
        mindiff = min(mindiff, sum - 2*range[i]);
    }
    return mindiff;
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

    cout<<MinSubsetDiff(arr, n)<<endl;

    return 0;
}