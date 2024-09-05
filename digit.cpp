#include<iostream>
using namespace std;
int main(){
    int num;
    int count;
    int dig;
    int digit;
    cout<<"Enter your num";
    cin>>num;
   while(num>0){
      count++;
      num=num/10;

   }
   if(count=2){
    while(num>0){
       int digit=num%10;
        num=num/10;

    }
     int dig=digit%10;
    if(dig%digit==0){
        cout<<"one";
    }
    else{
        cout<<"two";
    }
   }
  /* else if(count=3){
     digit=num%10;
     dig=digit%10;
     de=dig%10;
     if(de==dig==digit){
        cout<<"one";
     }
     else*/
   }



