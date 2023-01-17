#include<bits/stdc++.h>
using namespace std;

float solve(string s){
    int n = s.size();
    if(n == 0) return 0;
    float sum = 0;
    int count = 0;
    for(int i=0;i<n;i++){
        if(s[i] >= 48 and s[i] <= 57){ 
            sum += s[i] - 48;
            count ++;
        }
    }
    return round(sum / (n-count));
}

int main()
{
    string s;
    cin>>s;

    cout<<solve(s)<<endl;

    return 0;
}