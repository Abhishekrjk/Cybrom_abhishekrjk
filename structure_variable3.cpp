#include <iostream>
using namespace std;
struct st
{
   char name[20];
    int age;
    float salary;
}s1,s2;
int main()
{
   // struct st s1={"abhishek",23,23000.5},s2;
    cout<<"Enter value employee one : ";
    cin>>s1.name>>s1.age>>s1.salary;
       s2=s1;
    cout<<"data for emp 2 :"<<endl;
    cout<<"name :"<<s2.name<<endl;
    cout<<"AGE :"<<s2.age<<endl;
    cout<<"salary :"<<s2.salary<<endl;





}
