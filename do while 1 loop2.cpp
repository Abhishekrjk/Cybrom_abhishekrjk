#include <iostream>
using namespace std;

int main()
{
    char ch;
    string n;

do
   {
    cout<<"enter a name :";
    cin>>n;
    cout<<"Hello -> "<<n<<endl;
    cout<<" continue y/n : ";
    cin>>ch;
   }while(ch=='y');
}
