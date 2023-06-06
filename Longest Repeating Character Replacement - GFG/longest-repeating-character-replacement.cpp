//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> mp;
        int ans=0, j=0, mx=0;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
            mx=max(mx, mp[s[i]]);
            if(i-j+1-mx > k)
            {
                mp[s[j]]--;
                j++;
            }
            ans=max(ans, i-j+1);
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        int K;
        cin >> K;

        Solution obj;
        cout << obj.characterReplacement(S, K) << endl;
    }
    return 0;
}
// } Driver Code Ends