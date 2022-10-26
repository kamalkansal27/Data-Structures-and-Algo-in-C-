// To find if any of the subset is equal to the sum given.
/*#include<bits/stdc++.h>
using namespace std;

const int N = 10e2 + 3;
int DP[N][N];

bool SubsetSum_MS(int arr[], int n, int sum)
{
    // Base Condition
    if(n == 0 && sum == 0) return true;
    if(n != 0 && sum == 0) return true;
    if(n == 0 && sum != 0) return false;

    if(DP[n][sum] != -1 ) return DP[n][sum];

    // Recursive call
    if(arr[n-1] > sum) 
    {
        SubsetSum_MS(arr, n-1, sum);
    }

    DP[n][sum] = SubsetSum_MS(arr, n-1, sum - arr[n-1]) || SubsetSum_MS(arr, n-1, sum);
    return DP[n][sum];
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

    int sum;
    cin>>sum;

    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            DP[i][j] = -1;
        }
    }

    if(SubsetSum_MS(arr,n,sum)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}*/

// Top down Approach

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int sum;
    cin>>sum;

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

    if(DP[n][sum]) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}