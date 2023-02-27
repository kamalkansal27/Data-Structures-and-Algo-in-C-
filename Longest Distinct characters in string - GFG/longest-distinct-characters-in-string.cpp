//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int longestSubstrDistinctChars (string s)
{
    unordered_map<char, int> mp;
    int i = 0, j = 0, ans = 0;
    int n = s.size();
    while(j < n){
        mp[s[j]]++;
        if(mp[s[j]] == 1){
            ans = max(ans, j-i+1);
            j++;
        }
        else{
            while(mp[s[j]] > 1){
                mp[s[i]]--;
                if(mp[s[i]] == 0) mp.erase(s[i]);
                i++;
            }
            ans = max(ans, j-i+1);
            j++;
        }
    }
    return ans;
}