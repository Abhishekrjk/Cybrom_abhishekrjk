#include<iostream>
using namespace std;
int main()
{
   int num,b,r,sum=0;
   cout<<"enter your number : " ;
   cin>>num;  //1234
   while(num!=0){
         r=num%10;// remnder value
         if(r%2==1){
              sum=sum+r;//sum
         }

   num=num/10;//

   }
   cout<<"sum of  all even digit : "<<sum;
   return 0;

}
