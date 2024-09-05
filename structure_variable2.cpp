#include <iostream>
using namespace std;
struct st
{
    char name[20];
    int age;
    float salary;
};
int main()
{
    struct st s1={"abhishek",23,23000},s2;
    //cout<<"Enter value employee one : ";
    //cin>>s1.name>>s1 .age>>s1.salary;

    cout<<"data for emp 1 :"<<endl;
    cout<<"name :"<<s1.name<<endl;
    cout<<"AGE :"<<s1.age<<endl;
    cout<<"salary :"<<s1.salary<<endl;





}
