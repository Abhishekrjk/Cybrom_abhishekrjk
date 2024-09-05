

//neon number code in cpp

#include<iostream>
using namespace std;
 int main(){
    int num,r,digit,a,c;
    cout<<"Enter your Number ";
    cin>>num;
     r=num*num; // 9*9=81
     digit=r%10; // 81%10=1
     a=r/10;
     c=a+digit;

  if(c==num){
    cout<<"Given num is neon number  "<<num<<endl;
  }
  else{
    cout<<"Given num is  not neon number  "<<num<<endl;
  }

 }
