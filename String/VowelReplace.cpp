// need to replace all the vowels present in the given string with "*".
#include<bits/stdc++.h>
using namespace std;

string Replace(string st)
{
    if(st.length() == 0) return st;

    for(int i=0;i<st.length();i++)
    {
        if(st[i] == 'A' || st[i] == 'E' || st[i] == 'O' || st[i] == 'I' || st[i] == 'U')
        {
            st[i] = '*';
        }
    }    
    return st;
}

int main()
{
    string s;
    getline(cin, s);

    cout<<Replace(s)<<endl;

    return 0;
}