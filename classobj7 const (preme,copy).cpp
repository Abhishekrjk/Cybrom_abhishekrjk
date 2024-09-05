#include<iostream>
using namespace std;
class cl
{
    public:
   int a,b;
   cl(){a=10;b=20;}
   cl(int x) {a=x;}
  cl(int x,int y){a=x;b=y;}
  cl(cl &obj4){a=obj4.a;b=obj4.b;}

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
    ~cl()
    {
        cout<<"\n BYE !!! \n"<<endl;
    }

};
int main()
{
  cl obj1,obj2(20,40),obj3(obj2),obj5(obj3);
  cout<<"*******obj1***"<<endl;

  obj1.show();
  cout<<"*******obj2***"<<endl;
 // obj1.getdata();
  obj2.show();
   cout<<"*******obj3***"<<endl;
 // obj1.getdata();
  obj3.show();
    cout<<"*******obj5***"<<endl;
 // obj1.getdata();
  obj5.show();



}




