
//stack using link list
#include <iostream>
using namespace std ;
 class node {
 public:
    int data ;
    node * next ;


     node (int data )
{

    this ->data ;
    next =NULL;

}
 };
 node * top =NULL;
 void push (int d)
 {
     node * newnode = new node(10);
     if(newnode==NULL){
        cout<<" memory is not allocated";
     }
     else{
         cout<<" memory  allocated success";

     if(top==NULL){
        top = newnode;
        cout<<"  first node is added success ";
       }
       else{
        newnode->next=top;
        top=newnode;
        cout<<"\n Next node  insert Success";
       }
     }
 }
 void display()
 {

     cout<<"\n print data   of stack \n";
     node * temp=top;
     while(temp!=NULL)
     {

         cout<<"==>"<<temp->data;
         temp=temp->next;
     }
 }
 int main()
 {
   push (10);
   push (20);
   push (30);
   push (40);
   display();
   return 0;

 }

