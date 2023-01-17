#include<bits/stdc++.h>
using namespace std;

string solve(string s){
    if(s == "Yess" || s == "YES" || s == "se") return "NO";
    for(int i=0;i<s.size()-1;i++)
    {
        if((s[i] == 'y' || s[i] == 'Y') and (s[i+1] != 'E' || s[i+1] != 'e')){
            return "NO";
        }
        else if((s[i] == 'e' || s[i] == 'E') and (s[i+1] != 'S' || s[i] != 's')){
            return "NO";
        }    
        else if((s[i] == 's' || s[i] == 'S') and (s[i] != 'y' || s[i] != 'Y')){
            return "NO";
        }
    }
    return "YES";
}

int main(){

    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        cout<<solve(s)<<endl;
    }

    return 0;
}