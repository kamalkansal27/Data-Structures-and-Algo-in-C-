#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    map<char, int> m;
    for(int i=0;i<s.size();i++){
        m[s[i]]++;
    }
    while(m['1'] > 0){
        cout<<1;
        m['1']--;
        if(m['+'] > 0){
            cout<<"+";
            m['+']--;
        }
    }
    while(m['2'] > 0){
        cout<<2;
        m['2']--;
        if(m['+'] > 0){
            cout<<"+";
            m['+']--;
        }
    }
    while(m['3'] > 0){
        cout<<3;
        m['3']--;
        if(m['+'] > 0){
            cout<<"+";
            m['+']--;
        }
    }
    cout<<endl;

    return 0;
}