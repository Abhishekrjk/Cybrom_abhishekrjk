#include <iostream>
using namespace std;

int main()
{

    int a=10,b=23;
    int *p,*p1;
    p=&a;
    p1=&b;

    cout<<"value of a = "<<a<<endl;
    cout<<"address of a = "<<p<<endl;
     cout<<"value of a by pointer = "<<*p<<endl;

p1=&b;
     cout<<"\n value of b = "<<b<<endl;
      cout<<"address of b = "<<p1<<endl;
     cout<<"value of a by pointer = "<<*p1<<endl;
p=p1;
     cout<<"\n\n address of a = "<<p<<endl;
     cout<<"address of b = "<<p1<<endl;
     cout<<" pointer p pointing value = "<<*p<<endl;
}




