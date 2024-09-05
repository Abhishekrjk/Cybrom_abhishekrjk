#include<iostream>
using namespace std;
class cl
{
public:
int a,b;
//


void getdata()
{
    cout<<"enter 2 values: "<<endl;
    cin>>a>>b;
}
void show()
{
    cout<<" 2 values are : "<<endl;
    cout<<a<< ", "<<b<<endl;
}

};
int main()
{
  cl obj1,obj2;
  obj1.getdata();
  obj1.show();
  obj2.getdata();
  obj2.show();


}
