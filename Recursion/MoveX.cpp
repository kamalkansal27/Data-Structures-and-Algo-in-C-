#include<bits/stdc++.h>
using namespace std;

string MoveX(string s)
{
    if(s.length() == 0) return "";

    char first = s[0];
    
    string ans = MoveX(s.substr(1));

    if(first == 'x') return ans + first;
    
    return first+ans;
}

int main()
{
    string s;
    cin>>s;

    cout<<MoveX(s)<<endl;

    return 0;
}