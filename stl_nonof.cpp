#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[4]={-10,-20,-30,-40};
    
    none_of(arr,arr+4,[](int x){
    return x>0;

   })?cout<<"all element is negative "<<endl:cout<<"at least one  element are  positive ";
  return 0;
   }
    

