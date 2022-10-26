#include<bits/stdc++.h>
using namespace std;

class TrieNode
{
    public:

    char data;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char ch)
    {
        data = ch;
        for(int i=0;i<26;i++)
        {
            children[i] = nullptr;
        }
        isTerminal = false;
    }
};

class Trie{

    public :

    TrieNode* root;

    Trie()
    {
        ro 
    }

    void insertUtil(TrieNode* root, string word)
    {
        // Base Case
        if(word.length() == 0)
        {
            root->isTerminal = true;
            return ;
        }

        int index = word[0] - 'a';
        TrieNode* child;
        if(root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }
        insertUtil(child, word.substr(1));
    }

    void insertWord(string word)
    {
        insertUtil(root, word);
    }
    
    bool searchUtil(TrieNode* root, string word)
    {
        if(word.length() == 0)
        {
            return  root->isTerminal;
        }

        int index = word[0] - 'a';
        TrieNode* child;
        if(root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            return false;
        }
        return  searchUtil(child, word.substr(1));
    }

    bool searchWord(string word)
    {
        return searchUtil(root, word);
    }

    void remove_Recursive(TrieNode* root, string word)
    {
        if(word.length() == 0 and root->isTerminal == true)
        {
            return;
        }

        int index = word[0] - 'a';
        TrieNode* child;

        if(root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            return;
        }

        remove_Recursive(child, word);

        root->children[index] = NULL;
    }

    void remove(string word)
    {
        if(searchWord(word))
        {
            remove_Recursive(root, word);
        }
    }
    void removeUtil(TrieNode* root, string word)
    {
        if(word.length() == 0)
        {
            root->isTerminal = false;
            return ;
        }

        int index = word[0] - 'a';
        TrieNode* child;
        if(root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else{
            return;
        }
        removeUtil(child, word.substr(1));
    }

    void removeWord(string word)
    {
        removeUtil(root, word);
    }
};

int main()
{
    Trie* t = new Trie();
    t->insertWord("kamal");
    cout<<t->searchWord("kamal")<<endl;
    cout<<t->searchWord("kaml")<<endl;
    cout<<t->searchWord("kam")<<endl;
    t->removeWord("kamal");
    cout<<t->searchWord("kamal")<<endl;


    return 0;
}