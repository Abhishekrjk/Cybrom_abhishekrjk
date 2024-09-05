#include <iostream>
using namespace std;

int main()
{
    char ch='y';
    string n;

   while(ch=='y')
   {
    cout<<"enter a name :";
    cin>>n;
    cout<<"Hello -> "<<n<<endl;
    cout<<" continue y/n : ";
    cin>>ch;
   }
}
