#include<iostream>
#include<set>
using namespace std;

int main(){
   set<int,greater<int>> n;  // same work on string use greater   take to disendung order
   n.insert(30);
   n.insert(40);
   n.insert(90);
   n.insert(10);
   n.insert(20);
   n.insert(30);
   n.insert(50);


   cout <<" print data in set with help for  each loop";
   for(int x:n){
    cout<<"\t"<<x; //   10      20      30      40      50      80 ans
   }

   /******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


   set<string,greater<string>> n1;  // same work on string
   n1.insert("aman");
   n1.insert("lawrjhg");
   n1.insert("jaghe");
   n1.insert("wevd");
   n1.insert("abhi");
   n1.insert("zowjc");



   cout <<" print data in set with help for  each loop";
   for(string x:n1){
    cout<<"\t"<<x; //   10      20      30      40      50      80 ans
   }
   return 0;



}
