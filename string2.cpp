#include<bits/stdc++.h>
using namespace std;

int main(){
 string s="welcome";
 cout<<s.find("e");
 cout<<"\n"<<s.find("me");
 cout<<"\n"<<s.find("zee");
 int x=s.find("zee");
 cout<<"\n index of zee = "<<x;

 int n= s.find("e");
 int f=s.find("e",n+1);
 cout<<"second occurence of e is "<<f;

   return 0;
}
