#include <iostream>
using namespace std;
int main()
{
    int num,res=0;
    cout<<"Enter any no = ";
    cin>>num;
    int m=num;
    while(num>0)
    {
       int r=num%10;
       res=res*10+r;
       num=num/10;
    }
    if(m==res){
        cout<<"this number is palindrome = "<<m<<endl;
    }
    else{
         cout<<"this number is not palindrome"<<m<<endl;
    }
    return 0;
}
