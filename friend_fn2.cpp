#include<iostream>
using namespace std;
class B;
class A
{
private:
 int a;
protected:
    int b;
public:

 A()
 {
     a=40;
     b=30;

 }
 friend void frnd(A,B);

};
class B
{
private:
 int x;
protected:
    int y;
public:

 B()
 {
     x=70;
     y=80;

 }
 friend void frnd(A,B);

};

 void frnd(A obja3,B objb3)
{

    cout<<"value of variable a: "<<obja3.a<<endl;
   cout<<"value of variable b: "<<obja3.b<<endl;
   cout<<"value of variable x: "<<objb3.x<<endl;
   cout<<"value of variable y: "<<objb3.y<<endl;

}




int main()
{
    A obja1;
    B objb1;
   cout<<"Fn called: "<<endl;
   frnd(obja1,objb1);

}
