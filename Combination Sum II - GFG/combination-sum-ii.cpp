//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  private:
    void solve(int idx, vector<int> temp, int sum, vector<vector<int>>& ans, vector<int>& nums){
        if(sum == 0){
            ans.push_back(temp);
            return;
        }
        if(sum < 0 || idx == nums.size()) return ;
        
        for(int i = idx; i < nums.size(); i ++){
            if(i != idx  and nums[i] == nums[i-1]) continue;
            if(nums[i] > sum) break;
            temp.push_back(nums[i]);
            solve(i+1, temp, sum-nums[i], ans, nums);
            temp.pop_back();
        }
    }
  public:
    vector<vector<int>> combinationSum2(vector<int> &candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        sort(candidates.begin(), candidates.end());
        solve(0, temp, target, ans, candidates);
        return ans;
    }
};

//{ Driver Code Starts.
int main() {

    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> candidates(n);
        for (int i = 0; i < n; ++i) {
            cin >> candidates[i];
        }
        // char marker;
        // cin >> marker;

        Solution obj;

        vector<vector<int>> comb = obj.combinationSum2(candidates, k);
        sort(comb.begin(), comb.end());
        cout << "[ ";
        for (int i = 0; i < comb.size(); i++) {
            cout << "[ ";
            for (int j = 0; j < comb[i].size(); j++) {
                cout << comb[i][j] << " ";
            }
            cout << "]";
        }
        cout << " ]\n";

        // cout << "\n~\n";
    }
    fclose(stdout);
    return 0;
}

// } Driver Code Ends