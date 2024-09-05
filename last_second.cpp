#include<iostream>
using namespace std;

 int main()
{
    int num,a,b;
    cout<<"enter variable ";
    cin>>num;

   if(num<10&&num>0){
    cout<<num<<endl;
   }
    a=num/10;
     b=a%10;

     cout<<"second number is = "<<b<<endl;
}
