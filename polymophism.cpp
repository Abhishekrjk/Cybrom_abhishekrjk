#include<iostream>
using namespace std;
class A
{
public:
    int a,b;
    A(){a=20;b=40;}
    void sum(int x,int y)
    {
        cout<<"sum= "<<x+y;
    }

};

int main()
{
   A obja1;
    //B objb1;

    obja1.sum(40,50);


}
