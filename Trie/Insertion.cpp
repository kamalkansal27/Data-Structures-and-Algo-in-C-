#include<bits/stdc++.h>
using namespace std;

class TrieNode
{
    public:

    char data;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char val)
    {
        data = val; 
        for(int i=0;i<26;i++)
        {
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

int main()
{
    return 0;
}