#include<iostream>
using namespace std;
union un
{
char name[20];
int age;
float salary;
};
int main()
{
   un s1;
   cout<<"name : ";
   cin>>s1.name;
   cout<<"Name is : "<<s1.name<<endl;
      cout<<" age : ";
   cin>>s1.age;
   cout<<"age is : "<<s1.age<<endl;
      cout<<"salary: ";
   cin>>s1.salary;
   cout<<"salary is : "<<s1.salary<<endl;

}



