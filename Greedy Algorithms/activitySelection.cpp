// To determine the maximum no. of activities which can be performed.
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    vector<vector<int>> time;
    for(int i=0;i<n;i++){
        int start, end;
        cin>>start>>end;
        time.push_back({start, end});
    }

    sort(time.begin(), time.end(), [&](vector<int> &a, vector<int> &b){
        return a[1] < b[1]; 
    });

    int activity = 1;
    int endtime = time[0][1];

    for(int i=1;i<n;i++){
        if(time[i][0] >= endtime){
            activity ++ ;
            endtime = time[i][1];
        }
    }
    cout<<activity<<endl;

    return 0;
}