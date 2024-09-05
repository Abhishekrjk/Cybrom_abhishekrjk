
#include<iostream>
using namespace std;
int main()
{
    //clrscr();




    int number,count=0,a;

    cout<<"Enter number to chack prime number:  ";
    cin>>number;
    for(int a=2;a<number;a++)
    {
        if(number%a==0)
        {
          count++;
        }
    }


if(count==0)
{
    cout<<(" prime number \n");
}
else
{
    cout<<(" not a prime number \n");
}
}
