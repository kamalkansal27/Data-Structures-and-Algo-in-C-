#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Maxheap;
    priority_queue<int> pq;

    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(40);
    pq.push(50);

    cout<<"Element Present at the Top - "<<pq.top()<<endl;
    pq.pop();
    cout<<"Element Present at the Top - "<<pq.top()<<endl;

    // minheap
    priority_queue<int, vector<int>, greater<int>> p;

    p.push(10);
    p.push(20);
    p.push(30);
    p.push(40);
    p.push(50);

    cout<<"Element Present at the Top - "<<p.top()<<endl;
    p.pop();
    cout<<"Element Present at the Top - "<<p.top()<<endl;

    return 0;
}