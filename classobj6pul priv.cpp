#include<iostream>
using namespace std;
class cl
{
private:
   int a=40,b=50,c;
public:
  /* void getdata()
   {
    cout<<"Enter two values : ";
    cin>>a>>b;
}*/
void showdata()
   {
    c=a+b;
    cout<<" sum of two values : =";
    cout<<c;
    }

};
int main()
{
  cl obj1;
 // obj1.getdata();
  obj1.showdata();


}




