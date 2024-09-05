#include<iostream>
using namespace std;
class cl
{
    public:
   int a,b;
   cl(){a=10;b=20;}
   cl(int x) {a=x;}
  cl(int x,int y){a=x;b=y;}

  /* void getdata()
   {
    cout<<"Enter two values : ";
    cin>>a>>b;
}*/
void show()
   {

    cout<<" value of a is : ="<<a<<endl;
     cout<<" value of b is  : ="<<b<<endl;

    }

};
int main()
{
  cl obj1,obj2(20),obj3(40,10),obj4(obj3);
  cout<<"*******obj1***"<<endl;

  obj1.show();
  cout<<"*******obj2***"<<endl;
 // obj1.getdata();
  obj2.show();
   cout<<"*******obj3***"<<endl;
 // obj1.getdata();
  obj3.show();
  obj4.show();


}




