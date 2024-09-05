#include <iostream>
using namespace std;

int main()
{

   int a=10;
   int&r=a;
  cout<<"value of a = "<<a<<endl;
  cout<<"value of r = "<<r<<endl;

  r=50;

  cout<<"value of a = "<<a<<endl;
  cout<<"value of r = "<<r<<endl;



}
