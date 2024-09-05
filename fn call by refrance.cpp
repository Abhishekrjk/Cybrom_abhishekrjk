#include <iostream>
using namespace std;

int main()
{
    int a,b;
    void  swap(int,int);
    cout<<"Enter value variable a and b : ";cin>>a>>b;
    cout<<"val of variable a and before swap :"<<a<<" , "<<b<<endl;
    swap(a,b);
    cout<<"val of variable a and after swap :"<<a<<" , "<<b;
}
    void swap(int x,int y)
{



    int temp;
       temp=x;
       x=y;
       y=temp;
}
