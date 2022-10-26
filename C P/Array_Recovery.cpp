#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int d[n];
        for(int i=0;i<n;i++){
            cin>>d[i];
        }
        
        vector<int> a;
        bool flag = false;
        for(int i=0;i<n;i++){
            if(i == 1) a.push_back(d[i]);
            else if(a[i-1] + d[i] > 0 and a[i-1] - d[i] > 0 and d[i] != 0){
                cout<<-1<<endl;
                flag = true;
                break;
            }
            else{
                if(a[i-1] - d[i] > 0){
                    a.push_back(a[i-1] - d[i]);
                }
                else{
                    a.push_back(a[i-1] + d[i]);
                }
            }
        }
        if(flag == false){
            for(int i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}