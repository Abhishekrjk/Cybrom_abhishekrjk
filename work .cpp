#include<iostream>
using namespace std;

int main()
{

    int num,n,digit,rev=0;

    cout<<"Enter a positive number:";
    cin>>num;
      n=num;
      do
      {
        digit=num%10;
        rev=(rev*10)+digit;
        num=num/10;
    }while(num!=0);

    cout<<"reverse of the number -> "<<n<< " is -> "<<rev;
    }


