#include<iostream>
using namespace std;
int main()
{int arr[5]={3,2,5,8};
  int *ptr;
  ptr=&arr[0];



  cout<<ptr<<endl;
  cout<<*ptr<<endl;
  for(int i=0;i<4;i++)
  {
      cout<<(ptr+i)<<endl;
       cout<<*(ptr+i)<<endl;
   }
 // cout<<*ptr<<endl;

}

