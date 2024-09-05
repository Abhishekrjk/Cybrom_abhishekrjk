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
   class B : public A
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
class C : public A
{

public:
    int v;
    C(){v=50;}

  void showc(){
   cout<<" value of v is : ="<<v<<endl;
   }
};
class D : public A
{

public:
    int n;
    D(){n=60;}

  void showd(){
   cout<<" value of n is : ="<<n<<endl;
   }
};

int main()
{
  //A obja1;
   B objb1;
   C objc1;
   D objd1;
   objb1.show();
   objb1.display();
   objc1.showc();
   objd1.showd();
}







