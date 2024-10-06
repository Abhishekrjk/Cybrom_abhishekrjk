#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> qu;
   qu.push(10);
   qu.push(45);
   qu.push(60);
   qu.push(70);
   qu.push(40);
   qu.push(80);
   qu.push(90);
  
  cout<<" print all element in stack \n ";
   while(!qu.empty()){
    cout<<"\t"<<qu.front();
    qu.pop();
   
   }
   
}