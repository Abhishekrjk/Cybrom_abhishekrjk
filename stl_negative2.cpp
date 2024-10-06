#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[4]={-10,20,-30,-40};
    
    any_of(arr,arr+4,[](int x){
    return x>0;

   })?cout<<"at least one  element are  positive ":cout<<"all element is negative "<<endl;
  return 0;
   }
    

