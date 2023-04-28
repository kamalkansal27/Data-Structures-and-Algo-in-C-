//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maxChildren(int N, int M, vector<int> &greed, vector<int> &sz) {
        sort(greed.begin(), greed.end());
        sort(sz.begin(), sz.end());
        int n = greed.size(), m = sz.size(), i = 0, j = 0, cnt = 0;
        while(i < n and j < m){
            if(greed[i] <= sz[j]){
                cnt ++;
                i ++;
            }
            j++;
        }
        return cnt;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;

        vector<int> greed(N), sz(M);
        for (int i = 0; i < N; i++) {
            cin >> greed[i];
        }
        for (int i = 0; i < M; i++) {
            cin >> sz[i];
        }
        Solution obj;
        cout << obj.maxChildren(N, M, greed, sz) << endl;
    }
    return 0;
}
// } Driver Code Ends