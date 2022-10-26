#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int coin[n];
    for(int i=0;i<n;i++){
        cin>>coin[i];
    }

    int sum;
    cin>>sum;

    int t[n+1][sum+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=sum;j++){
            if(i == 0){
                t[i][j] = INT_MAX-1;
            }
            else if(j==0){
                t[i][j] = 0;
            }
            else if(i == 1){
                if(j % coin[i-1] != 0){
                    t[i][j] = INT_MAX;
                }
                else{
                    t[i][j] = j / coin[i-1];
                }
            }
            else if(coin[i-1] > j){
                t[i][j] = t[i-1][j];
            }
            else{
                t[i][j] = min(t[i-1][j], 1 + t[i][j-coin[i-1]]);
            }
        }
    }

    cout<<t[n][sum]<<endl;

    return 0;
}