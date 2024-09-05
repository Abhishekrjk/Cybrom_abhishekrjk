#include<iostream>
using namespace std;
class A
{

    int a=10;
    friend class B;

};
  class B


{
public:
    void show (A &obja2)


{
    cout<< " variable of variable a = "<<obja2.a;
}
};
int main()
{
    A obja1;
    B objb1;
    objb1.show(obja1);
}

