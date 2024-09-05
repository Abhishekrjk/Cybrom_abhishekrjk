#include <iostream>
#include<math.h>
using namespace std;
class evil
{
public:

   void evil2()
{

     int n ;

    int num = 0 ,x=0 , c=0;
    cout<<"enter your number ";
    cin>>n;
    while(n>0)
    {
        int r = n%2;
        if(r==1)
        {


            ++c;
        num = num +(r*(int)pow(10,x));
            x=x+1;
            n=n/2;

    cout<<"the number is evil"<<+c<<endl;
        }
    else
        cout<<"the  number is odious "<<+c<<endl;
    }
}
};
int main()
{

    evil obj1;
    obj1.evil2();
}



