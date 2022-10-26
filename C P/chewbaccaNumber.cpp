#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    for(int i=0;i<s.size();i++){
        int num = s[i] - '0';
        if(i == 0 and num == 9){
            cout<<num;
        }
        else if(num < 5){
            cout<<num;
        }
        else{
            cout<<9-num;
        }
    }
    cout<<endl;

    return 0;
}