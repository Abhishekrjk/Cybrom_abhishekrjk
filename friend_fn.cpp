#include<iostream>
using namespace std;
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
 friend void show(A &obj3);

};

 void show(A &obj3)
{

    cout<<"value of variable a: "<<obj3.a<<endl;
    cout<<"value of variable b: "<<obj3.b<<endl;

}



int main()
{
    A obj1;
   cout<<"Fn called: "<<endl;
   show(obj1);

}
