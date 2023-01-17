#include<bits/stdc++.h>
using namespace std;

string solve(vector<vector<int>> matrix){

    pair<int, int> maxi_idx;
    pair<int, int> mini_idx;

    // Traverse the matrix and find the maximum and minimum element'indices.

    int maxi = INT_MIN;
    int mini = INT_MAX;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if(maxi < matrix[i][j]){
                maxi = matrix[i][j];
                maxi_idx.first = i;
                maxi_idx.second = j;
            }
            if(mini > matrix[i][j]){
                mini = matrix[i][j];
                mini_idx.first = i;
                mini_idx.second = j;
            }
        }
    }
    if(maxi_idx.first == mini_idx.first || maxi_idx.second == mini_idx.second) return "NO";
    return "YES";
}

int main(){

    int t;
    cin>>t;

    while(t--){
        vector<vector<int>> matrix(2,vector<int>(2,0));
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                cin>>matrix[i][j];
            }
        }

        cout<<solve(matrix)<<endl;
    }

    return 0;
}