#include <iostream>
using namespace std;

int main()
{
 int a,b,c;
 cout<<"Enter three number : ";
 cin>>a>>b>>c;
if(a > b && a > c )
 {
   cout<<"max value "<<a;
 }
       else if(b>c)
 {
   cout<<"max value!! "<<b;
 }
   else
 {
    cout<<"max value = "<<c;
 }
}
