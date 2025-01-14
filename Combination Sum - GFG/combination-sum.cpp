//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    void solve(int idx, vector<int> temp, vector<vector<int>>& ans, vector<int>& A, int sum){
        if(sum == 0){
            ans.push_back(temp);
            return ;
        }
        if(idx == A.size()){
            return ;
        }
        if(A[idx] <= sum){
            temp.push_back(A[idx]);
            solve(idx, temp, ans, A, sum-A[idx]);
            temp.pop_back();
        }
        solve(idx+1, temp, ans, A, sum);
    }
    vector<vector<int> > combinationSum(vector<int> &A, int B) {
        vector<vector<int>> ans;
        vector<int> temp;
        sort(A.begin(), A.end());
        vector<int> nums;
        nums.push_back(A[0]);
        for(int i = 1; i < A.size(); i ++){
            if(A[i] == A[i-1]){
                continue;
            }
            nums.push_back(A[i]);
        }
        solve(0, temp, ans, nums, B);
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            A.push_back(x);
        }   
        int sum;
        cin>>sum;
        Solution ob;
        vector<vector<int>> result = ob.combinationSum(A, sum);
   		if(result.size()==0){
   			cout<<"Empty";
   		}
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}	
// } Driver Code Ends