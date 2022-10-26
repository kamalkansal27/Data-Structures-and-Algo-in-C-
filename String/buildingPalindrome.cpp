#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    for(int i=1;i<=t;i++){

        int n, q;
        cin>>n>>q;

        string s;
        cin>>s;

        int l, r;
        int ans = 0;
        for(int j=1;j<=q;j++){
            cin>>l>>r;
            int odd = 0;
            string temp = "";
            for(int k=l-1;k<=r-1;k++){
                temp += s[k];
            }
            map<int, int> m;
            for(int k=0;k<temp.length();k++){
                m[temp[k]]++;
            }                
            for(int k=0;k<temp.length();k++){
                if(m[temp[k]] % 2 != 0){
                    odd++;
                }
            }   
            if(temp.length() % 2 == 0){
                if(odd == 0){
                    ans++;
                }
            }
            else{
                if(odd == 1){
                    ans ++;
                }
            }
        }
        cout<<"Case #"<<i<<": "<<ans<<endl;
    }

    return 0;
}