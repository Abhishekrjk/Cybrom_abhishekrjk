#include<iostream>
using namespace std;
class A
{
public:
    int a;
    A(){a=20;}
    A(int x){a=x;}
   A operator + (A &obj3)
    {
         a=obj3.a+a;
       return *this;
    }

};

int main()
{
   A obj1,obj2(20),obj3;
    //B objb1;

  obj3   = obj1 + obj2;
 cout<<"value of a= "<<obj3.a;



}
