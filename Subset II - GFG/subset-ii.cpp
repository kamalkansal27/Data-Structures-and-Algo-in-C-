//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  private:
  void solve(int idx, vector<int> temp, set <vector<int>>& s, vector<int>& nums){
      if(idx == nums.size()){
          sort(temp.begin(), temp.end());
          s.insert(temp);
          return;
      }
      temp.push_back(nums[idx]);
      solve(idx + 1, temp, s, nums);
      temp.pop_back();
      solve(idx + 1, temp, s, nums);
  }
  public:
    vector<vector<int>> printUniqueSubsets(vector<int>& nums) {
        set <vector<int>> s;
        vector<int> temp;
        vector<vector<int>> ans;
        solve(0, temp, s, nums);
        for(auto it : s){
            ans.push_back(it);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        // char marker;
        // cin >> marker;

        Solution obj;
        vector<vector<int>> ans = obj.printUniqueSubsets(nums);
        sort(ans.begin(), ans.end());
        //   printAns(ans);
        cout << "[ ";
        for (int i = 0; i < ans.size(); i++) {
            cout << "[ ";
            for (int j = 0; j < ans[i].size(); j++) cout << ans[i][j] << " ";
            cout << "]";
        }
        cout << " ]\n";

        // cout<< "~\n";
    }

    return 0;
}

// } Driver Code Ends