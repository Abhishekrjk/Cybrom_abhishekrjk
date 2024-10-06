#include<iostream>
using namespace std;
int main()
{
    int n;

    cout<<"Enter number"<<endl;
            cin>>n;//5
           int *ptr;
           ptr=&n;

            cout<<ptr<<endl;//address of n
             cout<<*ptr<<endl;// value of n 10
             *ptr = *ptr+5;
             cout<<n<<endl;


              int n1 = 20;
              ptr =&n1;
               cout<<ptr<<endl;

               ptr=NULL;//null pointer
        }
