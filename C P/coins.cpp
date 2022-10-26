#include<bits/stdc++.h>
using namespace std;

int main(){
    
    map<char, int> m;
    
    for(int i=0;i<3;i++){
        string s;
        cin>>s;

        if(s[1] == '>'){
            m[s[0]]++;
        }
        else m[s[2]]++;
    }

    string ans = "";
    for(auto it : m){
        ans = it.first + ans;
    }
    if(m.find('A') == m.end()){
        ans = 'A' + ans;
    }
    if(m.find('B') == m.end()){
        ans = 'B' + ans;
    }
    if(m.find('C') == m.end()){
        ans = 'C' + ans;
    }
    cout<<ans<<endl;

    return 0;
}