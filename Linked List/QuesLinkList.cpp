// Ques1 - Append last K nodes of the Linked list to the start of the list.

/*#include<bits/stdc++.h>
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
int length(node* head)
{
    int l=0;
    node*temp = head;
    while(temp != NULL)
    {
        l++;
        temp = temp->next;
    }
    return l;
}
node* append(node* &head, int k)
{
    int l = length(head);
    k  = k%l;
    int count = 1;
    
    node* tail = head;
    node* newtail;
    node* newhead;

    while(tail->next != NULL)
    {
        if(count == l-k)
        {
            newtail = tail;
        }
        if(count == l-k+1)
        {
            newhead = tail;
        }
        count ++;
        tail = tail->next;
    }
    newtail->next = NULL;
    tail->next = head;

    return newhead;
}

int main()
{
    node*head = NULL;
    int arr[] = {1,2,3,4,5,6};
    for(int i=0;i<6;i++)
    {
        InsertAtTail(head,arr[i]);
    }
    display(head);
    node* newhead = append(head,3);
    display(newhead);
}*/

// Ques2 - Insert a node at the specific position in linked list.
/*#include<bits/stdc++.h>
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
node* InsertNodeatPos(node* head, int pos, int data)
{
    node* n = new node(data);
    
    if(pos == 1)
    {
        n->next = head;
        head = n;

        return head;
    }

    node*temp = head;
    int count = 1;

    while(count != pos - 1)
    {
        count ++;
       temp = temp->next;  
    }
    n->next = temp->next;
    temp->next = n; 

    return head;
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
    node* newhead = InsertNodeatPos(head , 1 , 0);
    display(head);
}*/
// Ques3 - Find the Intersection of two Linked list if any.

/*#include<bits/stdc++.h>
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
int length(node* head)
{
    int l = 0;
    node* temp = head;
    
    while(temp != NULL)
    {
        l++;
        temp = temp ->next;
    }
    return l;
}

int Intersect(node* head1 , node* head2)
{
    int l1 = length(head1);
    int l2 = length(head2);

    int d = 0;
    node* ptr1;
    node* ptr2;
    if(l1>l2)
    {
        d = l1-l2;
        ptr1 = head1;
        ptr2 = head2;        
    }
    else
    {
        d = l2-l1;
        ptr1 = head2;
        ptr2 = head1;
    }
    
    while(d)  // while d is not zero.
    {
        if(ptr1 == NULL)
        {
            return -1;
        }
        ptr1 = ptr1->next;
        d--;
    }
    while(ptr1 != NULL && ptr2 != NULL)
    {
        if(ptr1 == ptr2)
        {
            return ptr1->data;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;

    }
    return -1;
}*/