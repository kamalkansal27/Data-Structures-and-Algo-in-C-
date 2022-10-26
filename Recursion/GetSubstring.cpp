#include<bits/stdc++.h>
using namespace std;

void getSubstring(string s, string ans)
{
    if(s.length() == 0) 
    {
        cout<<ans<<endl;
        return;
    }

    char first = s[0];
    getSubstring(s.substr(1), ans);
    getSubstring(s.substr(1), ans + first);
}

int main()
{
    string s;
    cin>>s;

    getSubstring(s, "");

    return 0;
}