// We are given with two max heaps and we need to merge both of them to form a new maxheap.
#include<bits/stdc++.h>
using namespace std;

void heapify(vector<int> c, int size, int i)
{
    int largest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;

    if(left < size && c[largest] < c[left]) largest = left;
    if(right < size && c[largest] < c[right]) largest = right;

    if(largest != i)
    {
        swap(c[largest], c[i]);
        heapify(c, size, largest);
    }
}

vector<int> Merge(vector<int> a, vector<int> b, int m, int n)
{
    vector<int> c;
    for(int i=0;i<m;i++)
    {
        c.push_back(a[i]);
    }
    for(int i=0;i<n;i++)
    {
        c.push_back(b[i]);
    }

    int t = m + n;
    for(int i=(t/2)-1;i>=0;i--)
    {
        // Heapify
        heapify(c, t, i);
    }

    return c;
}

int main()
{
    vector<int> a;
    vector<int> b;

    a = {10, 5, 6, 2};
    b = {12, 7, 9};

    int m = a.size();
    int n = b.size();

    vector<int> c = Merge(a, b, m, n);

    for(int i=0;i<c.size();i++)
    {
        cout<<c[i]<<" ";
    }
    cout<<endl;

    return 0;
}