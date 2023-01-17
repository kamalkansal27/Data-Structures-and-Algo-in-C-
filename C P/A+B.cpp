#include<bits/stdc++.h>
using namespace std;

int solve(string s){

    int n = s.size();
    int i = 0;
    int num1 = 0;
    int num2 = 0;

    while(s[i] != '+'){
        num1 = num1*10 + s[i] - 48;
        i++;
    }
    
    i++;

    while(i != n){
        num2 = num2*10 + s[i] - 48;
        i++;
    }
    return num1 + num2;
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