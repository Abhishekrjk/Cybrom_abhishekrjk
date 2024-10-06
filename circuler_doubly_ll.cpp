#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int data)
    {
        this->data=data;
        next=NULL;
        prev=NULL;
    }

void display(Node *head)
{
    Node *temp=head;
while(temp!=NULL)
{
    cout<<"==>>"<<temp->data;
    temp=temp->next;
}
}

Node *add_start(Node *head,int data){
Node *newNode=new Node(data);
newNode->next=head;
head=newNode;
return head;
}
Node *add_end(Node *head,int data)
{
    Node *newNode=new Node(data);
    Node *temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
    return head;
}
Node *addAtpos(Node *head,int pos,int data)
{
    Node *newNode=new Node(data);
    Node *temp=head;
    Node *temp1=head->next;
    pos--;

while(pos!=1)
{
    temp=temp->next;
    temp1=temp1->next;
    pos--;
}
temp->next=newNode;
newNode->next=temp1;

return head;
}
Node *deleteAtpos(Node *head,int pos)
{
    Node *temp=head;
    Node *temp1=head->next;
    pos--;
    while(pos!=1)
    {
        temp=temp->next;
        temp1=temp1->next;
        pos--;
    }
    Node *temp2=temp1;
    temp->next=temp1->next;
    delete(temp2);
    return head;
}
};


int main(){
Node *first=new Node(10);
Node *second=new Node(20);
Node *third=new Node(30);
Node *four=new Node(40);

first->next=second;
second->prev=first;

second->next=third;
third->prev=second;

third->next=four;
four->prev=third;

Node *head=first;
Node *tail=four;

     Node * temp = first;
       do{
        cout<<"====>"<<temp->data;
        temp=temp->next;

       }while(temp!=first);
       return 0;


}




