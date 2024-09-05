#include <iostream>
using namespace std;

int main()
{
   int x,y;
   for(x=5;x>=0;x--)
   {
       for(y=0;y<=x;y++)
       {
           cout<<" * ";
       }
    cout<<endl;
   }
}
