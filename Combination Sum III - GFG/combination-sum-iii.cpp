//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  private:
    void solve(int idx, int n, int k, int sum, vector<int> temp, vector<vector<int>> &ans, vector<int> &arr){
        if(k == 0 and sum == 0){
            ans.push_back(temp);
            return ;
        }
        if(k == 0) return ;
        if(idx == n) return ;
        if(arr[idx] > sum) return;
        if(sum == 0) return ;
        
        temp.push_back(arr[idx]);
        solve(idx + 1, n, k - 1, sum - arr[idx], temp, ans, arr);
        temp.pop_back();
        solve(idx + 1, n, k, sum, temp, ans, arr);
        return ;
    }
  public:
    vector<vector<int>> combinationSum(int k, int n) {
        vector<int> nums = {1,2,3,4,5,6,7,8,9};
        vector<vector<int>> ans;
        vector<int> temp;
        solve(0, 9, k, n, temp, ans, nums);
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> K >> N;

        Solution obj;
        vector<vector<int>> ans = obj.combinationSum(K, N);
        sort(ans.begin(), ans.end());
        for (auto &arr : ans) {
            for (auto it : arr) cout << it << ' ';
            cout << endl;
        }
    }
    return 0;
}
// } Driver Code Ends