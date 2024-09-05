#include <iostream>
using namespace std;

int main()
{
    char ch='y';
    string n;
    //char ch;
    int a,b,c,d,e;
    cout<<"Enter three number"<<endl;
    cin>>a>>b>>c;

   while(ch=='y')
   {

   cout<<"1 : Add "<<endl;
   cout<<"2 : sub"<<endl;
   cout<<"3 : multiply"<<endl;
   cout<<"4 : divide"<<endl;
   cout<<"5 : Exit"<<endl;
   cout<<" Enter Abhishek your choice ";
   cin>>e;


    switch(e)
   {
    case 1 :
        d=a+b+c;
       cout<<"Add = "<<d<<endl;
       break;

    case 2 :
        d=a-b-c;
       cout<<"sub = "<<d<<endl;
       break;
     case 3 :
         d=a*b*c;
        cout<<"multiply = "<<d<<endl;
     break;
     case 4 :
         d=a/b/c;
         cout<<"divide = "<<d<<endl;
         break;
     case 5 :
                ch='n';
                break;
   // default;
   }
   }
}



