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
 st s1{"lokendra",12,123.34},*sptr;
 sptr=&s1;
 cout<<"data by struct variable s1"<<endl;
 cout<<s1.name<<" "<<s1.age<<" "<<s1.salary<<endl;
 cout<<"data by struct pointer sptr: "<<endl;
 cout<<(*sptr).name<<" "<<(*sptr).age<<" "<<(*sptr).salary<<endl;
  cout<<"data by struct arrow operator sptr: "<<endl;
 cout<<sptr->name<<" "<<sptr->age<<" "<<sptr->salary<<endl;


}
