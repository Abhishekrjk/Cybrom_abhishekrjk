#include <iostream>
using namespace std;

int main()
{
   char ch;
   cout<<"enter A char : ";
   cin>>ch;
   switch(ch)
   {
    case 'a'   :
       cout<<"Entered character"<<ch<<" is vowel "<<endl;
       break;

    case 'e' :
       cout<<"Entered character"<<ch<<" is vowel "<<endl;
       break;
     case 'i' :
        cout<<"Entered character"<<ch<<" is vowel "<<endl;
     break;
     case 'o' :
         cout<<"Entered character"<<ch<<" is vowel "<<endl;
         break;
         case 'u' :
           cout<<"Entered character"<<ch<<" is vowel "<<endl;
         break;
    default:
       cout<<"Entered character is consonant "<<endl;
   }

}
