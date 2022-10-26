#include<bits/stdc++.h>
using namespace std;

class node
{
    public:

    int data;
    node* next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void InsertAtHead(node* &head, int val)
{
    node* n = new node(val);
    if(head == NULL)
    {
        n->next = n;
        head = n;
        return;
    }

    node* temp = head;

    while(temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    head = n;
}
void InsertAtTail(node* &head, int val)
{
    node* n = new node(val);
    if(head == NULL)
    {
        InsertAtHead(head,val);
        return;
    }
    
    node* temp = head;    

    while(temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
}
void display(node* head)
{
    node* temp = head;
    do
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    } while (temp != head);
    cout<<endl;
}
void deletion(node* &head, int pos)
{
    node* temp = head;
    node* todelete;

    if(pos == 1)
    {
        while(temp->next != head)
        {
            temp = temp->next;
        }
        todelete = temp->next;
        head = head->next;
        temp->next = head;

        delete todelete;
        return;
    }

    int count = 1;
    while(count != pos-1)
    {
        temp = temp->next;
    }
    todelete = temp->next;
    if(temp->next->next != NULL)
    {
        temp->next = temp->next->next;
    }
    else
    {
        temp->next = head;
    }

    delete todelete;
}

int main()
{
    node* head = NULL;
    InsertAtTail(head, 1);
    InsertAtTail(head, 2);
    InsertAtTail(head, 3);
    InsertAtTail(head, 4);
    InsertAtTail(head, 5);
    display(head);
    deletion(head,3);
    deletion(head,5);
    display(head);

    return 0;
}