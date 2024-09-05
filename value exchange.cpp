#include <iostream>
using namespace std;
 int main()
 {
     int a,b;
     a=20;
     b=10;

     {
         a=a+b;
         b=a-b;
         a=a-b;
     }
     {
         cout<<" the exchange value is : a="<<a<<" , b= "<<b<<endl;
    }
 }
