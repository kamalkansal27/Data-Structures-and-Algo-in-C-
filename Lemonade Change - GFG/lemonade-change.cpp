//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool lemonadeChange(int N, vector<int> &bills) {
        int n = bills.size();
        int five = 0, ten = 0, twenty = 0;
        for(int i = 0; i < n; i ++){
            if(bills[i] == 5){
                five ++;
            }
            else if(bills[i] == 10){
                if(five > 0){
                    five --;
                    ten ++;
                }
                else{
                    return false;
                }
            }
            else{
                if(five > 0 and ten > 0){
                    five --;
                    ten --;
                }
                else if(five > 2){
                    five -= 3;
                }
                else{
                    return false;
                }
                twenty ++;
            }
            // cout<<five<<" "<<ten<<" "<<twenty<<endl;
        }
        return true;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> bills(N);
        for (int i = 0; i < N; i++) cin >> bills[i];

        Solution obj;
        int ans = obj.lemonadeChange(N, bills);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends