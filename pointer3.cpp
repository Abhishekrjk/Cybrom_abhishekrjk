#include<iostream>
using namespace std;
class product
{
public:
int pid;
string name;
int price;
product()
{

}

product(int id,string n, int p)
    {
        pid=id;
        name=n;
        price=p;
    }
    void print()
    {
        cout<<"Product id: "<<pid<<endl;
         cout<<"Product name: "<<name<<endl;
          cout<<"Product price: "<<price<<endl;
    }
};



class Node
{public:
    product data;
    Node *next;
};

int main()
{

    product p1(11,"Mobile",100000);
     product p2(22,"i phone",150000);
      product p3(33,"vivoMobile",634000);

    Node *n1=new Node();
    n1->data=p1;
    n1->next=NULL;

    Node *n2=new Node();
    n2->data=p2;
    n2->next=NULL;
    n1->next=n2;

    Node *n3=new Node();
    n3->data=p3;
    n3->next=NULL;
    n2->next=n3;

   /* cout<<n1->data<<endl;
    cout<<n1->next<<endl; //address of n2
    cout<<n2->data<<endl;
    cout<<n1->next->data<<endl;
    cout<<n2->next->data<<endl;*/

     Node *temp=new Node();
    temp=n1;

    while(temp!=NULL)
    {
        temp->data.print();

        temp=temp->next;
    }



}
