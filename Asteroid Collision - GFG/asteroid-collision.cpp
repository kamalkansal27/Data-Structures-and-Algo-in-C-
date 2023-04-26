//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> asteroidCollision(int N, vector<int> &ast) {
        int n = ast.size();
        stack<int> st;
        for(int i = 0; i < n; i ++){
            int curr = ast[i];
            if(st.empty()) st.push(curr);
            else if(st.top() < 0) st.push(curr);
            else if(st.top() >= 0){
                if(curr >= 0) st.push(curr);
                else{
                    if(abs(curr) < st.top()) continue;
                    else{
                        while(!st.empty() and st.top() >= 0 and abs(curr) > st.top()){
                            st.pop();
                        }
                        if(st.empty() || st.top() < 0){
                            st.push(curr);
                            continue;
                        }
                        if(abs(curr) == st.top()){
                            st.pop();
                            continue;
                        }
                        else{
                            continue;
                        }
                    }
                }
            }
        }
        vector<int> ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> asteroids(N);
        for (int i = 0; i < N; i++) cin >> asteroids[i];

        Solution obj;
        vector<int> ans = obj.asteroidCollision(N, asteroids);
        for (auto &it : ans) cout << it << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends