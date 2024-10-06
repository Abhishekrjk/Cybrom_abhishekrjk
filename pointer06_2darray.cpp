#include<iostream>
using namespace std;
int main()
{int a=20;
  int **ptr1;
   int *ptr;

  ptr=&a;
 ptr1=&ptr;

 cout<<ptr1<<endl;//address of ptr
 cout<<*ptr1<<endl;//address of a
cout<<**ptr1<<endl;//20

/*
  cout<<ptr<<endl;
  cout<<*ptr<<endl;
  for(int i=0;i<4;i++)
  {
      cout<<(ptr+i)<<endl;
       cout<<*(ptr+i)<<endl;
   }
 // cout<<*ptr<<endl;*/

}

