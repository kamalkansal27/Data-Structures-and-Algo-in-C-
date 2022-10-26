// To find the maximum value that can be obtained in the given Unbounded Knapsack.
/*#include<bits/stdc++.h>
using namespace std;

const int N = 10e2 + 3;
int DP[N][N];

int UnboundedKnapsack(int val[], int wt[], int n, int w)
{
    int DP[n+1][w+1];
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<w+1;j++)
        {
            // Intialisation.
            if(i == 0 || j == 0) DP[i][j] = 0;

            // Recursive Code.
            else if(wt[i-1] > j)
            {
                // Exclude
                DP[i][j] = DP[i-1][j];
            }
            else if(wt[i-1] <= j)
            {
                DP[i][j] = max(DP[i-1][j], val[i-1] + DP[i][j-wt[i-1]]);
            }
        }
    }
    return DP[n][w];
}

int UbKnapSack(int val[], int wt[], int n, int w)
{
    // Base Condition.
    if(n == 0 || w == 0) DP[n][w] =  0;

    if(DP[n][w] != -1) return DP[n][w];

    // Recursive Code.
    if(wt[n-1] > w)
    {
        // Exclude.
        UbKnapSack(val, wt, n-1, w);
    }

    DP[n][w] =  max(val[n-1] + UbKnapSack(val, wt, n, w-wt[n-1]), UbKnapSack(val, wt, n-1, w));
    return DP[n][w];
}

int main()
{
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            DP[i][j] = -1;
        }
    }

    int n;
    cin>>n;

    int val[n];
    for(int i=0;i<n;i++)
    {
        cin>>val[i];
    }

    int wt[n];
    for(int i=0;i<n;i++)
    {
        cin>>wt[i];
    }

    int w;
    cin>>w;

    cout<<UnboundedKnapsack(val, wt, n, w)<<endl;
    // cout<<UbKnapSack(val, wt, n, w)<<endl;

    return 0;
}*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int wt[n];
    for(int i=0;i<n;i++){
        cin>>wt[i];
    }

    int val[n];
    for(int i=0;i<n;i++){
        cin>>val[i];
    }

    int w;
    cin>>w;
    
    int t[n+1][w+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=w;j++){

            // Intialisation.
            if(i == 0 || j == 0){
                t[i][j] = 0;
            }

            else if(wt[i-1]  > j){
                t[i][j] = t[i-1][j];
            } 

            else if(wt[i-1 ] <= j){
                t[i][j] = max(t[i][j] = t[i-1][j], val[i-1] + t[i][j - wt[i-1]]);
            }

        }
    }

    cout<<t[n][w]<<endl;

    return 0;
}