#include<iostream>
using namespace std;

class kamal{
    int n, key, index ;
    public:
    void linearsearch(){

        cout<<"Size of the list - ";
        cin>>n;

        int arr[n];

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        cout<<"Enter the element wanna found - ";
        cin>>key;

        index = n;        
        arr[n] = key;

        for(int i=0;i<n;i++)
        {
            if(arr[i] == key)
            {
                index = i;
                break;
            }
        }
        if(index == n)
        {
            cout<<"Element Not Found"<<endl;
        }
        else
        {
            cout<<"Element Found at Index - "<<index<<endl;
        }
    }
};

int main(){

    kamal k1;
    k1.linearsearch();

    return 0;
}