#include<bits/stdc++.h>
using namespace std;

int solve(int n, string s){
    if(s[0] == '1' || s[n-1] == '1') return 2*n;
    int count_one = 0;
    int left = 1;
    int right = 0;
    int staircase = INT_MIN;
    for(int i=1;i<n-1;i++){
        left ++;
        if(s[i] == '1'){
            staircase = max(staircase, left);
            count_one ++;
        }
    }
    if(count_one == 0) return n;
    else{
        return 2 * staricase;
    }
}

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;

        cout<<solve(n, s)<<endl;
    }

    return 0;
}