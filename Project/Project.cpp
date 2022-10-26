#include<bits/stdc++.h>
using namespace std;

#define n 100

class stacks{

    int* arr;
    int top;

    public:
    stacks(){
        arr = new int [n];
        top = -1;
    }

    void push(int x){
        if(top == n-1){
            cout<<"Stack Overloaded."<<endl;
        }
        else{
            top ++;
            arr[top] = x;
        }
    }
    void pop(){
        if(top == -1){
            cout<<"Nothing to PoP here ,stack is empty."<<endl;
        }
        else{
            top--;
        }
    }
    int Top(){
        if(top == -1){
            return -1;
        }
        else{
            return arr[top];
        }
    }
    bool empty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }
    void display()
    {
        if(top == -1)
        {
            cout<<"Stack is empty."<<endl;
        }
        else{
            int temp = top;
            while(top != -1)
            {
                cout<<arr[top]<<endl;
                top--;
            }
            top = temp;
        }
    }

};

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
    stacks s;
    queuee q;
    cout<<"Stack and Queue Implmentation"<<setw(10)<<endl;
    cout<<"1.Stacks    2.Queues    3.Exit"<<endl;
    cout<<"Kindly Choose one of the Above mentioned Options:- ";
    int opt1;
    cin>>opt1;
    if(opt1 == 1)
    {
            cout<<"Following are the Opertion for the Stack Implementation."<<endl;
            cout<<"1. Push - To Insert an Element."<<endl;
            cout<<"2. Pop - To Remove an Element."<<endl;
            cout<<"3. Top - To Print the Top element of the stack."<<endl;
            cout<<"4. Empty - To Check whether the stack is empty."<<endl;
            cout<<"5. Display"<<endl;
            cout<<"6. Exit"<<endl;
        int opt2;
        while(opt2 != 6)
        {
            cout<<"Choose one of Above Mentioned Operations:- ";
            cin>>opt2;

            switch (opt2)
            {
            case 1:
                int val;
                cout<<"Enter the Value you wanna insert in stack:- ";
                cin>>val;
                s.push(val);
                cout<<val<<" - "<<" Inserted Successfully."<<endl; 
                break;
            
            case 2:
                s.pop();
                if(s.Top() != -1)
                {
                    cout<<s.Top()<<" - "<<"Deleted Successfully"<<endl;
                }
                break;

            case 3:
                cout<<"Top element of the Stack is:- "<<s.Top()<<endl;
                break;
            case 4:
                if(s.empty() == 1)
                {
                    cout<<"Stack is Empty"<<endl;
                }
                else
                {
                    cout<<"Stack is not Empty"<<endl;
                }
                break;
            case 5:
                cout<<"Elements Present in the stack"<<endl;
                s.display();
                break;        
            case 6:
                cout<<"Thanks for using Stack Implementation."<<endl;
                break;
            default:
                break;
            }

        }
    }
    else if(opt1 == 2)
    {
        int opt3;
        while(opt3 != 5)
        {
            cout<<"Following are the Operation for the Queue Implementation."<<endl;
            cout<<"1. Enqueue - To Insert an Element."<<endl;
            cout<<"2. Dequeue- To Remove an Element."<<endl;
            cout<<"3. Top - To Print the Top element of the stack."<<endl;
            cout<<"4. Empty - To Check whether the stack is empty."<<endl;
            cout<<"5. Exit"<<endl;

            cout<<"Kindly, Choose one of the following Operations:- ";
            cin>>opt3;

            switch (opt3)
            {
            case 1:
                int val;
                cout<<"Enter the Value you wanna insert in queue - ";
                cin>>val;
                cout<<val<<" - "<<"Inserted"<<endl;
                q.enqueue(val);
                break;
            
            case 2:
                q.dequeue();
                cout<<s.Top()<<" - "<<"Deleted"<<endl;
                break;

            case 3:
                cout<<"The Front element of the queue is :- ";
                cout<<q.peek()<<endl;
                break;
            case 4:
                if(q.empty() == 1)
                {
                    cout<<"Queue is empty"<<endl;
                }
                else
                {
                    cout<<"Queue is not empty"<<endl;
                }
                break;     
            case 5:
                cout<<"Thanks for using Queue Implementation."<<endl;
                break;
            default:
                break;
            }

        }
    }


    return 0;
}