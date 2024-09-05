#include<iostream>
using namespace std;
class A
{
public:
    int a;
    A(){a=20;}

    A operator ++ ()
    {
         a=++a;
       return *this;
    }
};

int main()
{
   A obj1,obj3;


  obj3 = ++obj1;
 cout<<"value of a= "<<obj3.a;



}
