#include <iostream>
using namespace std;

int main()
{

    int a=10,b=23;
    int *p;
    p=&a;

    cout<<"value of a = "<<a<<endl;
    cout<<"address of a = "<<p<<endl;
     cout<<"value of a by pointer = "<<*p<<endl;

p=&b;
cout<<"value of b = "<<b<<endl;
    cout<<"address of b = "<<p<<endl;
     cout<<"value of a by pointer = "<<*p<<endl;


}
