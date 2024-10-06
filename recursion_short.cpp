#include<iostream>
using namespace std;
int sqrNumber(int n)
{
    //base condition
    if (n==0)
        return 0;
    int sqr =n*n;
    cout<<sqr<<endl;
    return sqrNumber(n-1);
}
int main()
{
    //print process
   int num;
   cout<<"enter number"<<endl;
   cin>>num;
    sqrNumber(num);
}
