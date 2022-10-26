#include<bits/stdc++.h>
using namespace std;

string solve(int n, string s){
    if(n == 1 || n == 2) return s;
    string first = "";
    string second = "";

    if(n % 2 == 0){
        for(int i=n-1;i>=0;i--){
            if(i % 2 == 0){
                first = first + s[i];
            }
            else{
                second  = s[i] + second;
            }
        }   
    }
    else{
        for(int i=n-1;i>=0;i--){
            if(i % 2 == 0){
                second  = s[i] + second;
            }
            else{
                first = first + s[i];
            }
        } 
    }
    return first + second;
}

int main(){

    int n;
    cin>>n;

    string s;
    cin>>s;

    cout<<solve(n, s)<<endl;

    return 0;
}