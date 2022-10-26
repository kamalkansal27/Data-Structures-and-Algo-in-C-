#include<bits/stdc++.h>
using namespace std;

class que
{
    stack<int> s1;
    stack<int> s2;

    public:
        void enqueque(int x)
        {
            s1.push(x);
        }
        void dequeue()
        {
            if(s1.empty() and s2.empty())
            {
                cout<<"Queue is Empty."<<endl;
            }
            else if(s2.empty() and !s1.empty())
            {
                while(!s1.empty())
                {
                    s2.push(s1.top());
                    s1.pop();
                }
            }
            
            int topval = s2.top();
            cout<<"Element to be Popped is - "<<topval<<endl;
            s2.pop();
        }
};

int main()
{
    que q1;
    q1.dequeue();
    q1.enqueque(5);
    q1.dequeue();

    return 0;
}