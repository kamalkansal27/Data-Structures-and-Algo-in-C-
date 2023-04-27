//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// design the class in the most optimal way
class LRUCache {
public:

    class node{
        public:
            int val;
            int key;
            node* next;
            node* prev;

            node(int _key, int _val){
                key = _key;
                val = _val;
            }
    };


        node* head = new node(-1,-1);
        node* tail = new node(-1,-1);

        unordered_map<int,node*>mp;
        int cap;

    LRUCache(int capacity) {
        cap = capacity;
        head->next=tail;
        tail->prev=head;
    }

    void addnode(node* newnode){
        node * temp = head->next;

        newnode->next= temp;
        temp->prev=newnode;

        head->next=newnode;
        newnode->prev=head;
    }

    void deletenode(node* delnode){
        node* delprev = delnode->prev;
        node* delnext = delnode->next;

        delprev->next=delnext;
        delnext->prev=delprev;
    }
    
    int GET(int key) {
        if(mp.find(key)!=mp.end()){
            node * resnode = mp[key];
            int ans = resnode->val;
            mp.erase(key);
            deletenode(resnode);
            addnode(resnode);
            mp[key]=head->next;

            return ans;
        }
        return -1;
    }
    
    void SET(int key, int value) {
        if(mp.find(key)!=mp.end()){
            node * existingnode = mp[key];
            deletenode(existingnode);
            mp.erase(key);
        }
        if(mp.size()==cap){
            mp.erase(tail->prev->key);
            deletenode(tail->prev);
        }
        addnode(new node(key,value));
        mp[key]=head->next;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int capacity;
        cin >> capacity;
        LRUCache *cache = new LRUCache(capacity);
        
        int queries;
        cin >> queries;
        while (queries--)
        {
            string q;
            cin >> q;
            if (q == "SET")
            {
                int key;
                cin >> key;
                int value;
                cin >> value;
                cache->SET(key, value);
            }
            else
            {
                int key;
                cin >> key;
                cout << cache->GET(key) << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends