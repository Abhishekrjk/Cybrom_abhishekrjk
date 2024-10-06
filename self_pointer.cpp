#include<iostream>
using namespace std;
class Node
{

    int data;
    Node *next;

};
int main()
{

    node*n1=new Node();
    n1->data =10;
     n1->next =Null;


      node*n2=new Node();
    n2->data =20;
     n2->next =Null;
      n2->next =n2;
      cout<<n1->data<<endl;
      cout<<n1->next<<endl;
      cout<<n2->data<<endl;
      cout<<n1->next->data<<endl;

}
