#include<iostream>
using namespace std;
class base
{
public:
    void print()
    {
        cout<<"base class called: "<<endl;
    }


};
class derive
{
public:
     void print()
    {
        cout<<"derived class called: "<<endl;
    }


};

int main()
{
   derive d;
   d.print();
}
