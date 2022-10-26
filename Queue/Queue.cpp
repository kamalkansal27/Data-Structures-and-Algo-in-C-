 #include<iostream>
using namespace std;

#define n 5

class queuee
{
    int *arr;
    int front , back;
    public:
    
    queuee()
    {
        arr = new int [n];
        front = -1;
        back = -1;
    }

    void enqueue(int val)
    {
        if(back == n-1)
        {
            cout<<"Overflowed"<<endl;
        }
        else
        {
            back++;
            arr[back] = val;

            if(front == -1)
            {
                front++;
            }
        }    
    }
    void dequeue()
    {
        if(front == -1 || front > back)
        {
            cout<<"Queue Empty."<<endl;
        }
        else
        {
            front ++;
        }
    }
    int peek()
    {
        if(front == -1 || front > back)
        {
            cout<<"Queue is Empty ,Nothing to show."<<endl;
            return 0;
        }
        else
        {
            return arr[front];
        }
    }
    bool empty()
    {
        if(front == -1 || front > back)
        {
            return 0;
        }    
        else
        {
            return -1;
        }
    }

};

int main()
{
    queuee q1;
    q1.enqueue(56);
    q1.enqueue(72);
    q1.enqueue(72);
    q1.enqueue(72);
    q1.enqueue(72);
    cout<<q1.empty()<<endl;
    cout<<q1.peek()<<endl;

    return 0;
}