#include<iostream>
using namespace std;
class A
{
public:
    int x;
    A(){x=20;}
    static int s;
//  A(){s++}


};
int A::s=0;

int main()
{
   A obj1,obj2,obj3;
  obj1.s=500;
  cout<<"value of no= "<<A::s;

  obj2.s = 600;
 cout<<"value of no= "<<obj3.s;



}
