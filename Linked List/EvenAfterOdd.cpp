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
int length(node* head)
{
    int count = 1;
    node* temp = head;
    while(temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
void EvenAfterOdd(node* head)
{
    node* odd = head;
    node* even = head->next;
    node* evenstart = even;

    while(even->next != NULL && odd->next)
    {
        odd->next = even->next;
        odd = odd->next;

        even->next = odd->next;
        even = even->next; 
    }  
    odd->next = evenstart;
    if(odd->next != NULL)
    {
        even->next == NULL; 
        
    }
}
int main()
{
    node* head = NULL;
    InsertAtTail(head, 1);
    InsertAtTail(head, 2);
    InsertAtTail(head, 3);
    InsertAtTail(head, 4);
    InsertAtTail(head, 5);
    InsertAtTail(head, 6);
    InsertAtTail(head, 7);
    display(head);
    EvenAfterOdd(head);
    display(head);

    return 0;
}