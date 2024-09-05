#include<iostream>
using namespace std;
class cl
{
public:
int a,b,c;
void getdata()
{
    cout<<"Enter two values : ";
    cin>>a>>b;
}
void showdata()
   {
    c=a+b;
    cout<<" sum of two values";
    cout<<c;
    }

};/*
void getdata()
{
    cout<<"enter 2 values: "<<endl;
    cin>>a>>b;
}
void show()
{
    cout<<" 2 values are : "<<endl;
    cout<<a<<b<<endl;
}

};*/
int main()
{
  cl obj1;
  obj1.getdata();
  obj1.showdata();


}
