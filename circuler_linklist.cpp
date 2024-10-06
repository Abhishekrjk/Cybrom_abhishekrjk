#include<iostream>
using namespace std ;
class node{
public:
    int data ;
    node  * next;


    node(int data){
        this ->data =data;
        next=NULL;

    }
    };
    int main()
    {

        node * first = new node(10);
        node * second =new node(20);
        node * third = new node(30);
        node * four =  new node(40);
       first->next= second;
       second->next=third;
       third->next= four;
       four->next=first;



       node * temp = first;
       do{
        cout<<"====>"<<temp->data;
        temp=temp->next;

       }while(temp!=first);
       return 0;


    }
