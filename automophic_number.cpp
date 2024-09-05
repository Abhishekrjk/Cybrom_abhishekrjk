#include<iostream>
using namespace std;
int main()
{
    int n,c,s,r;
    cout<<" enter your num" ;
    cin>>n;//25
    c=n%10;
    s = c*c;
    r=s%10;
    if(r==c)
    {
        cout<<"given number is automorphic number "<<n<<endl;
    }
    else{
         cout<<"given number is not automorphic number "<<n<<endl;
    }

}
