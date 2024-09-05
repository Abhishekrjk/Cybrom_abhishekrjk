#include<iostream>
#include<math.h>
using namespace std;
 int main()
 {
     float p,r,t,a,ci;
     cout<<" enter the r,t,and p = ";
     cin>>r>>t>>p;
     a=p*pow((1+(r/100)),t);
     cout<<"Amount a is = "<<a<<endl;
     ci=a-p;
      cout<<"Amount ci is = "<<ci<<endl;



 }
