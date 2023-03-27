//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int maximumSumRectangle(int r, int c, vector<vector<int>> m) {
        
        int maxi = INT_MIN;
        for(int i = 0; i < c; i ++){
            vector<int> temp(r, 0);
            for(int j = i; j < c; j ++){
                for(int k = 0; k < r; k ++){
                    temp[k] += m[k][j];
                }
                int curr = 0, maxSum = INT_MIN;
                for(int k = 0; k < r; k ++){
                    curr += temp[k];
                    maxSum = max(curr, maxSum);
                    if(curr < 0){
                        curr = 0;
                    }
                }
                maxi = max(maxi, maxSum);
            }
        }
        return maxi;
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;
        vector<vector<int>> v(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> v[i][j];
        Solution ob;
        cout << ob.maximumSumRectangle(N, M, v) << "\n";
    }
}
// } Driver Code Ends