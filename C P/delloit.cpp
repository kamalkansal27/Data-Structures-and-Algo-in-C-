#include<bits/stdc++.h>
using namespace std;

void result(vector<vector<int>> &values, int rows, int cols){
    for(int i=0;i<cols;i++){
        int maxi = INT_MIN;
        for(int j=0;j<rows;j++){
            maxi = max(maxi, values[j][i]);
        }
        for(int j=0;j<rows;j++){
            if(values[j][i] == -1) {
                values[j][i] = maxi;
            }
        }
    }
}

int main(){

    int n, m;
    cin>>n>>m;

    vector<vector<int>> arr(n, vector<int> (m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    result(arr, n, m);

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}