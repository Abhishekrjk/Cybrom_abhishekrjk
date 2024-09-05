
#include<iostream>
using namespace std;

int main()
{

    int p,r,t,SI,amount;

    cout<<"Enter your p,r,t:";
    cin>>p;
       cin>>r;
        cin>>t;

        SI=(p*r*t)/100;
        amount=p+SI;

    cout<<"your simple I is ="<<SI<<endl;
    cout<<"1 year-amount is: "<<amount<<endl;
}

