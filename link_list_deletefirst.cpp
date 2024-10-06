//Singly Linked List
#include&lt;iostream&gt;
using namespace std;
class Node{
public:
int data;

Node *next;
Node(int data){
this-&gt;data=data;
next=NULL;
}
void display(Node *head){
Node *temp=head;
while(temp!=NULL){
cout&lt;&lt;&quot;==&gt;&quot;&lt;&lt;temp-&gt;data;
temp=temp-&gt;next;
}
}
Node * addstart(Node *head,int data){//time complexity : O(1)
Node *newNode=new Node(data);
newNode-&gt;next=head;
head=newNode;
return head;
}
Node * addend(Node *head,int data){
Node *newNode=new Node(data);
Node *temp=head;
while(temp-&gt;next!=NULL){
temp=temp-&gt;next;
}
temp-&gt;next=newNode;
return head;
}
Node * addAtPos(Node *head,int pos,int data){
Node *newNode=new Node(data);
Node *temp=head;
Node *temp1=head-&gt;next;
pos--;//2
while(pos!=1){
temp=temp-&gt;next;
temp1=temp1-&gt;next;
pos--;
}
temp-&gt;next=newNode;
newNode-&gt;next=temp1;
return head;
}
Node * deleteFirst(Node *head){
Node *temp=head;
head=head-&gt;next;
delete(temp);
return head;
}
};
int main(){
Node *first=new Node(10);
Node *second=new Node(20);
Node *third=new Node(30);
Node *four=new Node(40);
Node *head=first;

head-&gt;next=second;
head-&gt;next-&gt;next=third;
head-&gt;next-&gt;next-&gt;next=four;
cout&lt;&lt;&quot;\nPrint Data of Singly \n&quot;;
head-&gt;display(head);
head=head-&gt;addend(head,50);
cout&lt;&lt;&quot;\nPrint Data after insert new node at end\n&quot;;
head-&gt;display(head);
head=head-&gt;addAtPos(head,4,35);//Time complexity: O(n)
cout&lt;&lt;&quot;\nPrint Data after insert new node atposition 4 : \n&quot;;
head-&gt;display(head);
head=head-&gt;deleteFirst(head);
cout&lt;&lt;&quot;\nPrint Data after Delete First Node: \n&quot;;
head-&gt;display(head);
return 0;
