#include<iostream>
using namespace std;
int main()
{
    int count=0;
    int arr[5]={-10,-20,-30,-40,-50};
   
  for(int i=1;i<5;i++){
     if(arr[i]>0){
         count++;
        }
    
  }
  if(count>0){
    cout<<"all element are not negative "<<endl;

  }
  else{
     cout<<"all element are   negative "<<endl;
  }
    
}