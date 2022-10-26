// To remove all the duplicates from the given string.

#include<bits/stdc++.h>
using namespace std;

void Remove(string s)
{
    if(s.length() == 0) return ;

    char first = s[0];
    string ros = s.substr(1);

    if(first == ros[0]) return Remove(ros);

    cout<<first;
    return Remove(ros);
}

int main()
{
    string s;
    cin>>s;

    Remove(s);
    cout<<endl;

    return 0;
}