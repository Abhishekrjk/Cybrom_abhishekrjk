#include<iostream>
using namespace std;

class Node
{
public:
      int data;
        Node *next;
    Node(int d,Node*n)
    {

        data =d;
        next = n;

    }
};
int sqrNumber(int n)
{
   if (n>10)
        return 0;
    int sqr =n*n;
    cout<<sqr<<endl;
    return sqrNumber(n+1);
}
int createNode( int n)
{
    //base condition
    if (n>10)
        return 0;
        Node *current =new Node(n,NULL);
        cout<<current->data<<endl;
         cout<<current<<endl;
         return createNode(n+1);

}


int main()
{
    //print process
   int num;
   cout<<"Enter number"<<endl;
   cin>>num;
    sqrNumber(num);//object
    createNode(num);

}
