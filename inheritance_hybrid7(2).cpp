#include<iostream>
using namespace std;
class A
{
    public:
   int a;
   A(){a=10;}

void show()
   {

    cout<<" value of A is : = "<<a<<endl;

   }

};
   class B : virtual public A
{
    public:
        int v;

void display();


  B() {cout<<" value of B is : ="<<endl;}


};
class C : virtual public A
{

public:

    void show1()
    {
         cout<<" value of C is : ="<<endl;
    }

};
class D : public B,public C
{

public:
    void show2()
    {
         cout<<" value of D is : ="<<endl;
    }


};


int main()
{
  //A obja1;
   //B objb1;
   D objd1;
   cout<<objd1.a;




}







