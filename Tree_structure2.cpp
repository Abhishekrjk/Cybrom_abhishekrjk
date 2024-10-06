#include<iostream>
using namespace std ;
 class node
 {
 public:
    int data;
    node *left;
    node *right;
 };
 int main()
{
    int no;
    cout<<"Enter no to add in tree"<<endl;
    cin>>no;

    node *newnode = new node();

    newnode->data=no;
    newnode->left=NULL;
    newnode->right=NULL;
    node *root = new node();
    root->data =10;

   if(root==NULL)
   {
       root = new node;
       cout<<root->data<<endl;
       cout<<root<<endl;
       cout<<newnode<<endl;


   }
  else {
    if(no < root->data)

    {
       root->left=newnode;

         cout<<" root data is = "<<root->data<<endl;
       cout<<"left data is = "<<newnode->data<<endl;
       cout<<"address is = "<<root->left<<endl;
       cout<<newnode<<endl;

    }
    else
    {



   root->right=newnode;
   cout<<" root data is = "<<root->data<<endl;
   cout<<"root right data is = "<<newnode->data<<endl;
   cout<<"address of right = "<<root->right<<endl;
   cout<<""<<newnode<<endl;
    }
   }
}

