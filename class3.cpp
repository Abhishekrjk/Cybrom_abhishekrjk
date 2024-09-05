#include<iostream>
using namespace std;
class abc{
public:
    int s;
    string name;
    int age;


};
int main(){
 abc obj[2];
 obj[1].s=90;
 cout<<obj[1].s<<endl;
 /*obj1.age=23;
 cout<<obj1.age<<endl;
 obj1.name="abhisek"
 cout<<obj1.name<<endl;

  obj2.s=50;
 cout<<obj2.s<<endl;
 obj2.age=53;
 cout<<obj2.age<<endl;
 obj2.name="bhabhisek"
 cout<<obj2.name<<endl;

*/
  obj[2].s=50;
 cout<<obj[2].s<<endl;

 return 0;

}
