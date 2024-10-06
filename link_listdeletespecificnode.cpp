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



Node *addstart(Node *head,int data)
{
    Node *newNode=new Node(data);
    newNode->next=head;
    head=newNode;
    return head;
}
Node * addend(Node * head,int data){
Node *newNode = new Node(data);
Node *temp= head;
while(temp->next!=NULL)
{
    temp=temp->next;

}
temp->next=newNode;
return head;
}
node * deleteLAST(node * haed){
    node * temp=head;
while(temp->next->next!=NULL){
   temp=temp->next;

}
     node * temp1=temp->next;
    temp->next=NULL;
    detele(temp1)
    retrn head;

}
node * deleteATpos()
 node * temp=head;
 node * temp1=temp->next;

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
head=head->addstart(head,5);
head=head->addend(head,50);

cout<<"\nprint data after insert new node at start \n";
head->display(head);

    return 0;
}
