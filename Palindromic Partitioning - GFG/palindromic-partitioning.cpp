//{ Driver Code Starts
// Initial Template for c++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
private:
    bool isPalindrome(int i, int j, string s){
        while(i <= j){
            if(s[i] != s[j]) return false;
            i++;
            j--;
        }
        return true;
    }
    int solve(int i, int j, string& str, vector<vector<int>>& dp){
        if(j >= str.length()){
            if(isPalindrome(i, str.size()-1, str)){
                return 0;
            }
            return INT_MAX;
        }
        if(dp[i][j] != -1) return dp[i][j];
        int cut = INT_MAX;
        if(isPalindrome(i, j, str)){
            cut = 1 + solve(j + 1, j + 1, str, dp);
        }
        int notCut = solve(i, j+1, str, dp);
        return dp[i][j] = min(cut, notCut);
    }
public:
    int palindromicPartition(string str)
    {
        vector<vector<int>> dp(str.length(), vector<int>(str.length(), -1));
        return solve(0, 0, str, dp);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.palindromicPartition(str)<<"\n";
    }
    return 0;
}
// } Driver Code Ends