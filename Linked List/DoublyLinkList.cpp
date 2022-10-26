#include<bits/stdc++.h>
using namespace std;

class node
{
    public:

    int data;
    node* next;
    node* previous;

    node(int val)
    {
        data = val;
        next = NULL;
        previous = NULL;
    }
};

void InsertAtTail(node* &head,int val)
{
    node* n = new node(val);
    
    if(head == NULL)
    {
        head = n;
        return;
    }

    node* temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    n->previous = temp;
    temp->next = n;
}
void display(node* head)
{
    node*temp = head;
    cout<<"NULL->";
    while(temp != NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
void InsertAtHead(node* &head,int val)
{
    node* n = new node(val);
    head->previous = n;
    n->next = head;
    head = n;
}
void deletion(node* &head, int pos)
{
    if(pos == 1)
    {
        node* todelete = head;
        head = head->next;
        head->previous = NULL; 

        delete todelete;
        return;
    }
    
    node*temp = head;
    
    int count = 1;
    while(temp != NULL && count != pos)
    {
        temp = temp->next;
        count++;
    }
    temp->previous->next = temp->next;
    if(temp->next != NULL)
    {
        temp->next->previous = temp->previous;
    }

    delete temp;
}

int main()
{
    node* head = NULL;
    InsertAtTail(head,1);
    InsertAtTail(head,2);
    InsertAtTail(head,3);
    InsertAtTail(head,4);
    InsertAtTail(head,5);
    InsertAtTail(head,6);
    display(head);
    InsertAtHead(head,7);
    InsertAtHead(head,8);
    display(head);
    deletion(head,3);
    deletion(head,1);
    deletion(head,6);
    display(head);

    return 0;
}