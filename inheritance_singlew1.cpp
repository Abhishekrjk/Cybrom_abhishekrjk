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
int main()
{
   A obja1;
   B objb1;
   obja1.show();
   objb1.display();
}





