#include<iostream>
using namespace std;

class kamal{
    int n;
    public:
    void sort(){
        cout<<"The Size of the array - ";
        cin>>n;
        int arr[n];

        for(int i = 0;i<n;i++){
            cin>>arr[i];
        }

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]>arr[j]){
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){

    kamal k1;
    k1.sort();


    return 0;
}