#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row; 
    int col;

    int arr[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
            if(arr[i][j] == 1){
                row = i;
                col = j;
            }
        }
    }

    // desired i = 2, j = 2
    int count = 0;
    while(row != 2){
        if(row<2) row++;
        else row--;
        count++;
    }

    while(col != 2){
        if(col<2) col++;
        else col--;
        count++;
    }

    cout<<count<<endl;

    return 0;
}