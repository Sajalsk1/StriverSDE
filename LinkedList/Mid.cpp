#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
    
    Node (int data)
    {
        this->data=data;
        next=NULL;
    }
};

Node* takeInput()
{
    int data;
    cin>>data;
    Node *head=NULL;
    
    while(data!= -1)
    {
        Node *newNode = new Node(data);
        
        if (head==NULL)
        {
           head=newNode;
        }
        
        else
        {
            Node *temp=head;
            while (temp->next!=NULL)
            {
                temp=temp->next;
            }
            
            temp->next=newNode;
        }
    
        cin>>data;
    }
    
      return head;
}



void print(Node *head)
{
   while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}

int Mid(Node *head)
{
    Node *slow=head;
    Node *fast=head;
    
    while(fast!=NULL && fast->next!=NULL)
    {
        fast->next->next;
        slow->next;
    }
    
    return slow;
}

int main()
{
    
    Node *head=takeInput();
    print(head);
    Mid(head);
}




