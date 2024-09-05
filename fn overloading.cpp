#include<iostream>
using namespace std;
class cl
{
    public:
   int a,b,c;
   cl(){a=10;b=20;}
   void sum()
{
    c=a+b;
    cout<<"sum = "<<c<<endl;
}
  void sum(int x,int y)
  {
      a=x;b=y;
      c=a+b;
      cout<<"sum = "<<c<<endl;
  }
};
int main(){
    cl obj1;
    obj1.sum();
    obj1.sum(40,45);
}


