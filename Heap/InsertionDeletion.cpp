#include<bits/stdc++.h>
using namespace std;

class heap
{
    public:

    int arr[100];
    int size; 

    heap()
    {
        arr[0] = -1;
        size = 0;
    }

    void Insert(int val)
    {
        size = size + 1;
        arr[size] = val;

        int index = size;

        while(index > 1)
        {
            if(arr[index] > arr[index/2])
            {
                // swapping
                int temp = arr[index];
                arr[index] = arr[index/2];
                arr[index/2] = temp;

                index = index/2;
            } 
            else
            {
                return;
            }
        }
    }

    void Delete()
    {
        if(size == 0)
        {
            cout<<"Nothing to Delete."<<endl;   
            return ; 
        }

        arr[1] = arr[size];
        size = size - 1;

        int i = 1;
        while(i < size)
        {
            int leftindex = 2*i;
            int rightindex = (2*i) + 1;

            if(leftindex < size && arr[i] < arr[leftindex])
            {
                swap(arr[i], arr[leftindex]);
                i = leftindex;
            }
            else if(rightindex < size && arr[i] < arr[rightindex])
            {
                swap(arr[i], arr[rightindex]);
                i = rightindex;
            } 
            else
            {
                return ;
            }
        } 
    }

    void print()
    {
        for(int i=1;i<=size;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main()
{
    heap h;
    h.Insert(50);
    h.Insert(55);
    h.Insert(53);
    h.Insert(52);
    h.Insert(54);
    h.print();  

    h.Delete();
    
    h.print();

    return 0;
}