#include<iostream>
using namespace std;
class A
{
   protected:
   int a=10;



};
class B : public A
{
    public:

void display()
   {

    cout<<" value of a is : = "<<a<<endl;

    }

};
int main()
{

   B objb1;

   objb1.display();
}





