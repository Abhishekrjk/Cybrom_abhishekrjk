#include<iostream>
using namespace std;
int main()
{
   int num,b,r,sum=0;
   cout<<"enter your number : " ;
   cin>>num;  //1234
   while(num!=0){
         r=num%10;// remnder value
   sum=sum+r;//sum
   num=num/10;//

   }
   cout<<"sum of digit : "<<sum;
   return 0;

}
