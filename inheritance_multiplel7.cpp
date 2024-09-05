#include<iostream>
using namespace std;
class A
{
    public:
   int a,b;
   A(){a=10;b=20;}

void show()
   {

    cout<<" value of a is : ="<<a<<endl;
     cout<<" value of b is  : ="<<b<<endl;

    }

};
   class B
{
    public:
   int x,y;
   B(){x=30;y=40;}


void display()
   {

     cout<<" value of x is : ="<<x<<endl;
     cout<<" value of y is  : ="<<y<<endl;

    }

};
class C : public A,public B
{

public:
    int v;
    C(){v=50;}

  void showc(){
   cout<<" value of v is : ="<<v<<endl;
   }
};


int main()
{
  //A obja1;
   //B objb1;
   C objc1;

   objc1.A::show();
   objc1.B::display();
   objc1.showc();



}







