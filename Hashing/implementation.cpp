#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main()
{
    // creation.
    unordered_map<string, int> m;
    
    // insertion.
    
    // 1
    pair<string, int> p1 = make_pair("mera", 1);
    m.insert(p1);

    // 2
    pair<string, int> p2("naam", 2);
    m.insert(p2);

    // 3
    m["babbar"] = 3;
    m["babbar"] = 4;

    // Searching
    cout<<m["mera"]<<endl;
    cout<<m["naam"]<<endl;
    cout<<m.at("babbar")<<endl;
   
    // cout<<m.at("unknown")<<endl; // this will give error as no entry with name unknown is present
    cout<<m["unknown"]<<endl;  // this will create a new entry and output 0
    cout<<m.at("unknown")<<endl;  // now entry has been created and it will not give any error.

    // check the presence.
    cout<<m.count("kamal")<<endl;
    cout<<m.count("naam")<<endl;

    //size
    cout<<m.size()<<endl;

    // delete
    m.erase("unknown");
    cout<<m.size()<<endl;

    // Traversal.
    // 1
    for(auto i:m)
    {
        cout<<i.first<<" -> "<<i.second<<endl; 
    } 

    // 2.

    unordered_map<string, int> :: iterator it = m.begin();
    while(it != m.end())
    {
        cout<<it->first<<" -> "<<it->second<<endl;
        it++;
    }
    for(it = m.begin(); it != m.end(); it++)
    {
        cout<<it->first<<" -> "<<it->second<<endl;
    }

    return 0;
}