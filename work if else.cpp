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
    if (rev==n)
    {
        cout<<" the given number -> "<<n<< " is PALANTROM NUMBER ";

    }
    else{
         cout<<" the given number -> "<<n<< " is not a PALANTROM NUMBER ";
    }
}



