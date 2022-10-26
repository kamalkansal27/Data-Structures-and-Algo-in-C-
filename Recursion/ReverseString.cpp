// To reverse the Given string.

#include<bits/stdc++.h>
using namespace std;

// My approach
void reverse(int i, string s)
{
    if(i < 0) return;
    cout<<s[i];
    
    return reverse(i-1, s);
}

// Optimized Approach
void reverse(string s)
{
    if(s == "") return;

    string ros = s.substr(1);
    reverse(ros);
    cout<<s[0];
}

int main()
{
    string s;
    cin>>s;

    reverse(s.length()-1, s);
    cout<<endl;
    reverse(s);
    cout<<endl;

    return 0;
}