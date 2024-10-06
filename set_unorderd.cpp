#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
  unordered_set<int> n;  // same work on string use greater   take to disendung order
   n.insert(30);
   n.insert(40);
   n.insert(90);
   n.insert(10);
   n.insert(20);
   n.insert(30);
   n.insert(50);


   cout <<" \n print data in set with help for  each loop \n ";
   for(int x:n){
    cout<<"\t"<<x; //   10      20      30      40      50      80 ans
   }

  //for  string data


  unordered_set<string> n1;  // same work on string
   n1.insert("aman");
   n1.insert("lawrjhg");
   n1.insert("jaghe");
   n1.insert("wevd");
   n1.insert("abhi");
   n1.insert("zowjc");



   cout <<" \n print data in set with help for  each loop \n ";
   for(string x:n1){
    cout<<"\t"<<x; //   10      20      30      40      50      80 ans
   }
   return 0;



}
