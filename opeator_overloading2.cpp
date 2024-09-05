#include<iostream>
using namespace std;
class A
{
public:
    int a;
    A(){a=20;}
    void operator + (A &obj3)
    {
          a=obj3.a+500;
        cout<<"value of a= "<<a;
    }

};

int main()
{
   A obj1,obj2;
    //B objb1;

    obj1 + obj2;


}
