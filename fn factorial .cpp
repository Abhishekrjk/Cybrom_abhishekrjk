#include <iostream>
using namespace std;
string name;
int main()
{
   string get ();
   void show(string);
   string s1;
    s1=get();
   show(s1);
}
  string get()
{
    string name;
   cout<< " my name is : = ";
   cin>>name;
   return name;
}
 void show (string s3)
{
    string name;
   cout<<" Hello how are you : "<<s3;
}



