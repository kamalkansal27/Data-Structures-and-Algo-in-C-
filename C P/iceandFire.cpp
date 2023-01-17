#include<bits/stdc++.h>
using namespace std;


int main(){

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        string s;
        cin>>s;

        int prev = 0, last = -1, len = 0;
        for(int i = 0; i < n-1; i++){
            len ++;
            int curr = (s[i] - '0');
            if(curr == last){
                cout<<prev<<" ";
            }
            else{
                cout<<len<<" ";
                prev = len;
            }
            last = curr; 
        }
        cout<<endl;
    }

    return 0;
}