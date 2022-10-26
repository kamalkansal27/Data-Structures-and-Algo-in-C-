#include<iostream>
#include<set>
using namespace std;

/*int main()
{
    set<int> s;

    // Inserting the element to the set.
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(6); // Since order set is having unique element only, it will not print 3 again.
    s.insert(5);

    // Printing the element of the set.
    for(auto i = s.begin(); i != s.end(); i++)
    {
        cout<< *i << " ";
    }
    cout<<endl;

    // Printing the element of the set in Reverse order.
    for(auto i = s.rbegin(); i != s.rend(); i++)
    {
        cout<< *i << " ";
    }
    cout<<endl;
    
    // Size of the set.
    cout<< s.size() <<endl;

    // Custom Comparator
    set<int,greater<int>> c;
    c.insert(1);
    c.insert(2);
    c.insert(3);
    c.insert(4);

    for(auto i : c)
    {
        cout<<i<<endl;
    }

    return 0;
}*/

// **************************MULTISET************************************
// This type of set contains duplicate element.

int main()
{
    multiset<int> s;
    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(3);

    for(auto i : s)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    s.erase(1); // it will erase all the occurences of 1.
    s.erase(s.find(3)); // it will erase only first occurence of 3.

    for(auto i : s)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
    return 0;
}