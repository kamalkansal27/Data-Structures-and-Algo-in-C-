/* linked list contains mutiple blocks of memory(Nodes) which are linked to each other. They 
are not contigously attached we just need to connect them. nodes have two segments like one 
containing the data and other one containing the address of the next node. head pointer marks
the starting of any linked list which is having the address of the first node and node having 
NULL in its address field is the last node of the linked list. */

#include<bits/stdc++.h>
using namespace std;

class node
{
    public:

    int data;
    node* next;   // it stores the address of a node itself.

    node(int val)
    {
        data = val;
        next = NULL;
    }

};

void InsertAtHead(node* &head,int x)
{
    node *n = new node(x);
    n->next = head;
    head = n;
}
void InsertAtTail(node* &head, int x)
{
    node* n = new node(x);
    if(head == NULL)
    {
        head = n;
        return;                 // 1 -> 2 -> 3 -> NULL;
    }
    node* temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n; 
}
void display(node* head)
{
    node*temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
bool search(node* head,int key)
{
    node*temp = head;
    while(temp != NULL)
    {
        if(temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}
void deleteAThead(node* &head)
{
    node* todelete = head;         // 1->2->3->null
    head = head->next;

    delete todelete;
}
void deletion(node* &head, int val)
{
    if(head == NULL)
    {
        cout<<"Linked List is Already empty."<<endl;
        return;
    }
    if(head->next == NULL)
    {
        node* todelete = head;
        head = head->next;

        delete todelete;
        return;
    }
    node* temp = head;
    while(temp->next->data != val)           // 1->2->3->null
    {
        temp = temp->next;
    }
    node* todelete = temp->next;
    temp->next = temp->next->next;

    delete todelete;
}
node* reverse(node* &head)
{
    node* prevptr = NULL;
    node* currptr = head;          
    node* nextptr;                     

    while(currptr != NULL)
    {
        nextptr = currptr->next;

        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
    }
    return prevptr;
}

int main()
{
    node* head = NULL;
    InsertAtTail(head,1);
    InsertAtTail(head,2);
    InsertAtTail(head,3);
    display(head);
    InsertAtHead(head,4);
    display(head);
    cout<<reverse(head)<<endl;
    display(head);

    return 0;
}
