//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long int topDown(int coins[],int i,int N, int target,vector<vector< long long int>>&dp){
        if(target == 0){
            return 1;
        }
        
        if(target<0){
            return 0;
        }
        
        if(i==N){
            return 0;
        }
        
        if(dp[i][target] != -1){
            return dp[i][target];
        }
        
        long long int include = 0;
        if(coins[i] <= target){
            include = topDown(coins,i,N,target-coins[i],dp);
        }
        
        long long int exclude = topDown(coins,i+1,N,target,dp);
        
        dp[i][target] = include+exclude;
        return dp[i][target];
    }
    long long int count(int coins[], int N, int sum) {
       sort(coins, coins + N);
       reverse(coins, coins + N);
       vector<vector< long long int > > dp(N+1,vector< long long int >(sum+1,-1));
        return topDown(coins,0,N,sum,dp);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++) cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}


// } Driver Code Ends