#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    for(int k=1;k<=t;k++){

        int m, n, p;
        cin>>m>>n>>p;

        int arr[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>arr[i][j];
            }
        }

        int ans = 0;
        int col = 0;
        while(col < n){
            int maxi = -1e9;
            for(int row=0;row<m;row++){
                if(row == p-1) continue;
                else{
                    maxi = max(maxi, arr[row][col]);
                }
            }
            if(maxi - arr[p-1][col] > 0){
                ans += maxi - arr[p-1][col];
            } 
            col++;
        }

        cout<<"Case #"<<k<<": "<<ans<<endl;
    }

    return 0;
}