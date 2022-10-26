/*To find the max value of the items given that can be inserted in the knapsack 
Condition apply that total wieght of the items should not be greater than the wt of knapsack*/

/*#include<bits/stdc++.h>
using namespace std;

const int N = 1e3 + 2;
int val[N];
int wt[N];
int DP[N][N];

int KnapSack(int n, int w)
{
    if(DP[n][w] != -1) return DP[n][w];

    if(n <= 0) return 0;
    if(w <= 0) return 0;

    if(wt[n-1] > w) return KnapSack(n-1,w);        // Don't Take the item.

    DP[n][w] = max(KnapSack(n-1,w), KnapSack(n-1, w - wt[n-1]) + val[n-1]);
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

    int n;  cin>>n;     // No. of items in a Knapsack.
    for(int i=0;i<n;i++)
    {
        cin>>val[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>wt[i];
    }

    int w;  cin>>w; // Wieght of the Knapsack.

    cout<<KnapSack(n, w)<<endl;

    return 0;
}*/
/*
#include<bits/stdc++.h>
using namespace std;

const int N = 10e2 + 3;
int DP[N][N];
int val[N];
int wt[N];

int KnapSack(int n, int w, int val[], int wt[])
{
    // Base Case
    if(n == 0 || w == 0) return 0;
    if(DP[n][w] != -1) return DP[n][w];

    // Choice Diagram
    if(wt[n-1] > w) 
    {
        KnapSack(n-1, w-wt[n-1], val, wt);    
    }

    DP[n][w] =  max(KnapSack(n-1, w, val, wt), val[n-1] + KnapSack(n-1, w-wt[n-1], val, wt));
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
    int wt[n];

    for(int i=0;i<n;i++)
    {
        cin>>val[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>wt[i];
    }
    
    int w;
    cin>>w;

    cout<<KnapSack(n, w, val, wt);

    return 0;
}*/

// Top Down Approach.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int val[n];
    int wt[n];

    for(int i=0;i<n;i++)
    {
        cin>>val[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>wt[i];
    }
    
    int w;
    cin>>w;

    int DP[n+1][w+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=w;j++)
        {
            // Intialisation.   
            if(i == 0 || j == 0) DP[i][j] = 0;

            // Recursive to Iterative
            else if(wt[i-1] > j) 
            {
                DP[i][j] = DP[i-1][j];
            } 
            else
            {
                DP[i][j] = max(val[i-1] + DP[i-1][j-wt[i-1]], DP[i-1][j]);
            }
        }
    }

    cout<<DP[n][w]<<endl;  

    return 0;
}