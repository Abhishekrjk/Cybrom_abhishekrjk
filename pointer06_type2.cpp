#include<iostream>
using namespace std;
int main()
{
    int a=10;
  void *ptr; //wild pointer
    cout<<sizeof(ptr)<<endl;
    ptr =&a;//normal pointer
     cout<<ptr<<endl;
      cout<<ptr<<endl;

     ptr=NULL;//null poiter
   //cout<<*ptr<<endl;//invailid pointer

     double b=10;
       ptr = &b;
        cout<<ptr<<endl;
       // delete ptr;

     cout<<ptr<<endl;//dangling state

}
