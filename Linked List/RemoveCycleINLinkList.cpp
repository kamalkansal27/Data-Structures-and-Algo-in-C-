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
        return;
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
void makecycle(node*head, int pos)
{
    node*temp = head;
    node*joint;

    int count = 1;
    while(temp->next != NULL)
    {
        if(count == pos)
        {
            joint = temp;
        }
        count++;
        temp = temp->next;
    }
    temp->next = joint;
}
void removeCycle(node* &head)
{
    node* fast = head;
    node* slow = head;

    do
    {
        slow = slow->next;
        fast = fast->next->next;
    }while(slow != fast);
     
    fast = head;
    while(fast->next != slow->next)
    {
        fast = fast->next;
        slow = slow->next;
    }
    slow->next = NULL;
    cout<<"Cycle has been Removed from the list"<<endl;
}
bool detectCycle(node* head)
{
    node*fast = head;
    node*slow = head;

    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(fast == slow)
        {
            return true;
        }
    }
    return false;
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
    makecycle(head, 3);
    cout<<detectCycle(head)<<endl;
    removeCycle(head);
    cout<<detectCycle(head)<<endl;
    display(head);

    return 0;
}