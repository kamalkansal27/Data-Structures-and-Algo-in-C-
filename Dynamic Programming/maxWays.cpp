// To find the maximum number of ways so that we can achieve the given sum with unlimited number of coin
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
                t[i][j] = 0;
            }
            else if(j == 0){
                t[i][j] = 1;
            }
            else if(coin[i-1] > j){
                t[i][j] = t[i-1][j];
            }
            else if(coin[i-1] <= j){
                 t[i][j] = t[i-1][j] + t[i][j-coin[i-1]];
            }
        }
    }

    cout<<t[n][sum]<<endl;

    return 0;
}