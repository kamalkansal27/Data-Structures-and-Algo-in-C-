#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; 
    cin>>t;

    for(int i=0;i<t;i++){
        int n, m;
        cin>>n>>m;

        int participant[n];
        for(int j=0;j<n;j++){
            cin>>participant[j];
        }

        int counter = 1;
        while(counter < n)
        {
            for(int j=0;j<n-counter;j++)
            {
                if(participant[j] > participant[j+1])
                {
                    // Swap
                    int temp = participant[j];
                    participant[j] = participant[j+1];
                    participant[j+1] = temp;
                }
            }
            counter++;
        }

        int p = n/m;
        int matric = 0;
        int start = 0;
        int end = n-1
        while(p != 0){
            if(p % 2 != 0){
                start = n-p;
                matric = participant[start+end/2];
                end = end - p;
            }
            else{
                int start = 0;
            }
        }
    }

    return 0;
}