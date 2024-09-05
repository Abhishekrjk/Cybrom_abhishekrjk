#include<iostream>
using namespace std;
int main()
{
    int num , a, b,sum=0;
    cout<<"enter your num = ";
    cin>>num;
    for(int i=1;i<num;i++)
    {
        if(num%i==0){
            sum=sum+i;
        }

    }
     if(num==sum) {
           cout<<"perfect no is = " <<num<<endl;
        }
        else
        {
             cout<<" not perfect no is = "<<num<<endl;
        }
}
