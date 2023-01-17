#include<bits/stdc++.h>
using namespace std;

string solve(int n, int m, int k, int arr[]){

    int max_freq;   // Maximum frequency that color can have.
    int max_element; // Maximum elements that can have maximum frequency.

    if(n % k  == 0){
        max_freq = n/k;     // since there are n/k block that should have different colors 
        max_element = k;    // tape is divided into k consecutive blocks
    } 
    else{
        max_freq = n/k + 1;     // since there are n/k equal block and one unequal extra block.
        max_element = n % k;    // No. of cells in unequal block
    }

    for(int i=0;i<m;i++){
        if(arr[i] > max_freq) return "NO";
        if(arr[i] == max_freq){
            max_element --;
        }
    }
    if(max_element < 0) return "NO";
    return "YES";
}

int main(){

    int t;
    cin>>t;

    while(t--){
        
        int n, m, k;  
        cin>>n>>m>>k;

        int arr[m];
        for(int i=0;i<m;i++){
            cin>>arr[i];
        }

        cout<<solve(n, m, k, arr)<<endl;

    }

    return 0;
}