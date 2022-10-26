#include<bits/stdc++.h>
using namespace std;

int solve(int capacity, int size, int boxes[], int matches[]){
    // Sorting of array.
    vector<pair<int, int>> temp;
    for(int i=0;i<size;i++){
        temp.push_back(make_pair(matches[i], boxes[i]));
    }
    sort(temp.begin(), temp.end());
    reverse(temp.begin(), temp.end());
    // Greedly traverse the array.
    int ans = 0;
    for(int i=0;i<size;i++){
        pair<int, int> curr = temp[i];
        if(curr.second <= capacity){
            ans += curr.second * curr.first;
            capacity -= curr.second;
        } 
        else{
            ans += capacity * curr.first;
            break;
        }
    }
    return ans;
}

int main(){

    int n, m;
    cin>>n>>m;

    int boxes[m];
    int matches[m];

    for(int i=0;i<m;i++){
        cin>>boxes[i]>>matches[i];
    }

    cout<<solve(n, m, boxes, matches)<<endl;
    

    return 0;
}