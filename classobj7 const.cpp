#include<iostream>
using namespace std;
class cl
{
    public:
   int a,b;
   cl(){a=40;}
  cl(int x){a=x;}

  /* void getdata()
   {
    cout<<"Enter two values : ";
    cin>>a>>b;
}*/
void show()
   {

    cout<<" sum of two values : ="<<a<<endl;

    }

};
int main()
{
  cl obj1,obj2(50);
  cout<<"*******obj1***"<<endl;

  obj1.show();
  cout<<"*******obj2***"<<endl;
 // obj1.getdata();
  obj2.show();



}




