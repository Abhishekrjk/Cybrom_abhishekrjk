#include<iostream>
using namespace std;
class A
{
    public:
   int a,b;
   A(){a=10;b=20;}
   cout<<"\n class's A constructor called \n";
/*void show()
   {

    cout<<" value of a is : ="<<a<<endl;
     cout<<" value of b is  : ="<<b<<endl;

    }*/

};
class B : public A
{
    public:
   int a,b;
   B(){a=30;b=40;}
   cout<<"\n class's B constructor called \n";

void display()
   {

     cout<<" value of x is : ="<<a<<endl;
     cout<<" value of y is  : ="<<b<<endl;

    }

};
int main()
{
 // A obja1;
   B objb1;
   //obja1.show();
   objb1.display();
   cout<<"\n class's A variable through a = "<<objb1.A::a;
   cout<<"\n class's A variable through b = "<<objb1.A::b;
}





