#include<iostream>
using namespace std;
class A
{
    public:
   int a;

   A(){a=10;




    cout<<" value of A is : = "<<endl;}



};
   class B : virtual public A
{
    public:
  int x;


  B(){ cout<<" value of B is : ="<<endl;}


};
class C : virtual public A
{

public:
    int n;
    C(){cout<<" value of C is : ="<<endl;}


};
class D : public B,public C
{

public:
   int v;

     D(){cout<<" value of D is : ="<<endl;}



};


int main()
{
  //A obja1;
   //B objb1;
   D objd1;
   cout<<objd1.a;




}







