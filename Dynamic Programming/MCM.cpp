// To find the minimum no. of multiplications by multiply the given matrices.

#include<bits/stdc++.h>
using namespace std;

const int N = 10e2 + 3;
int t[N][N];

int solve(int dimension[], int i, int j){
    // Base condition.
    if(i>=j){
        return 0;
    }

    if(t[i][j] != -1){
        return t[i][j];
    }

    int cost = INT_MAX;
    for(int k=i;k<=j-1;k++){
        int tempAns = solve(dimension, i, k) + solve(dimension, k+1, j) + dimension[i-1] + dimension[j] + dimension[k];
        cost = min(cost, tempAns);
    }
    t[i][j] = cost;
    return t[i][j];
}

int main(){

    int n;
    cin>>n;

    int dimension[n];
    for(int i=0;i<n;i++){
        cin>>dimension[i];
    }

    memset(t, -1, sizeof(t));

    cout<<solve(dimension, 1, n-1)<<endl;

    return 0;
}