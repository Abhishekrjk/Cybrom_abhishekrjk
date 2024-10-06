#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<string> g1;
    vector<string> g2;
    g1.push_back("Akash");
    g1.push_back("Deepak");
    g1.push_back("Aman");
    g1.push_back("Ashwin");
    g1.push_back("Shivam");
    g1.push_back("pooja");
    g1.push_back("kartik");

     g2.push_back("A");
    g2.push_back("B");
    g2.push_back("C");
    g2.push_back("D");
    g2.push_back("E");
    g2.push_back("F");
    g2.push_back("G");
    cout<<"Before Swapping ofg1 and g2\n";

 cout<<"\nPrint All Students Data of vector g1 \n";
 for(string  a:g1){
     cout<<"\n"<<a;
 }


 cout<<"\nPrint All Students Data of vector g2 \n";
 for(string  a:g2){
     cout<<"\n"<<a;
 }
 g1.swap(g2);

   cout<<"After Swapping ofg1 and g2\n";
   cout<<"\nPrint All Students Data of vector g1 \n";
 for(string  a:g1){
     cout<<"\n"<<a;
 }


 cout<<"\nPrint All Students Data of vector g2 \n";
 for(string  a:g2){
     cout<<"\n"<<a;
 }

	return 0;
}
