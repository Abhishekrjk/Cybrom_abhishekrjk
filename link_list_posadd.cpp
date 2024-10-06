#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data=data;
        next=NULL;
    }
    void display(Node *head){
    Node *temp=head;
      while(temp!=NULL)
      {
          cout<<"==>"<<temp->data;
          temp=temp->next;
      }
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

};
int main()
{
    Node *first=new Node(10);
     Node *second=new Node(20);
      Node *third=new Node(30);
     Node *four=new Node(40);
     Node *head=first;
     head->next;
     head->next=second;
      head->next->next=third;
        head->next->next->next=four;

        cout<<"print data of singly linked list"<<endl;
head->display(head);


head=head->add_end(head,50);
cout<<"\nprint data after insert new node at end \n";
head->display(head);

head=head->addAtpos(head,4,35);
cout<<"\nprint data after insert new node at position fourth \n";
head->display(head);
    return 0;
}
