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
   un s1,s2;

   int i;
   i=sizeof(un);
    cout<<" the size of union is : = "<<i<<endl;
}
