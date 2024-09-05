#include<iostream>
using namespace std;
class A
{
public:
    void virtual print()=0;
void show()
{
    cout<<"test: "<<endl;
}

};
class derive : public A
{
public:
     void print()
    {
        cout<<"derived class called: "<<endl;
    }


};

int main()
{
    A *obj;
 //  (*b).show();
   //or

   obj->show();

   derive d;
   obj=&d;
   obj->print();
}













