#include<iostream>
using namespace std;
struct st
{
string name;
int age;
float salary;
};
int main()
{
   struct st s1[2];
   for(int i=0;i<2;i++)
   {
       cout<<"*employee"<<i+1<<"*"<<endl;
       cout<<"enter your name age and salary: "<<endl;
       getline(cin,s1[i].name);
          cin>>s1[i].age>>s1[i].salary;

   }
   cout<<"     data        ";
     for(int i;i<2;i++)
   {
       cout<<"*employee"<<i+1<<"*";
       cout<<"enter your name ,age and salary: ";

       cout<<s1[i].name<<"  ,  "<<s1[i].age<<" ,"<<s1[i].salary;

   }
}
