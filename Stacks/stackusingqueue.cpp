// Push operation costly.

/*#include<bits/stdc++.h>
using namespace std;

class Stack
{
    queue<int> q1;
    queue<int> q2;
    int N;

    public:
        Stack()
        {
            N = 0;
        }
        void push(int x)
        {
            q2.push(x);
            N++;
            while(!q1.empty())
            {
                q2.push(q1.front());
                q1.pop();
            }

            queue<int> temp = q2;
            q2 = q1;
            q1 = temp;
        }
        void pop()
        {
            q1.pop();
        }
        int top()
        {
            return q1.front();
        }
        int size()
        {
            return N;
        }

};

int main()
{
    Stack s;
    s.push(5);
    s.push(77);
    s.push(57);
    s.push(4);
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;

}*/

// POP operation Costly.
/*#include<bits/stdc++.h>
using namespace std;

class Stack
{
    int n;
    queue<int> q1;
    queue<int> q2;

    public:

    Stack()
    {
        n = 0;
    }
    void push(int x)
    {
        n++;
        q1.push(x);
    }
    void pop()
    {
        if(q1.empty() and q2.empty())
        {
            cout<<"Stack is Empty"<<endl;
        }
        else
        {
            while(n > 1)
            {
                q2.push(q1.front());
                q1.pop();
                n--;
            }
            int topval = q1.front();
            cout<<"Element to be popped out - "<<topval<<endl;
            q1.pop();

            queue<int> temp = q2;
            q2 = q1;
            q1 = temp;
        }    
        
    }
};

int main()
{
    Stack s;
    s.push(5);
    s.push(55);
    s.push(7);
    s.push(6);
    s.pop();

}*/