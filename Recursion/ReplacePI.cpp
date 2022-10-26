#include<bits/stdc++.h>
using namespace std;

void Replace(string s)
{
    if(s.length() == 0) return;

    if(s[0] == 'p' and s[1] == 'i')
    {
        cout<<"3.14";
        return Replace(s.substr(2));
    } 
    
    cout<<s[0];
    return Replace(s.substr(1));
}

int main()
{
    string s;
    cin>>s;

    Replace(s);
    cout<<endl;

    return 0;
}