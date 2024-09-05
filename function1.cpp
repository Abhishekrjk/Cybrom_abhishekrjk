#include <iostream>
using namespace std;

int main()
{
   int a,b,c;
   int add(int,int);
   a=10; b=20;
   c=add(a,b);

   cout<< " sum = "<<c;
}
       int add(int x,int y)
   {
   int t;
   t=x+y;
   return t;

}
