#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
   st.push(10);
   st.push(45);
   st.push(60);
   st.push(70);
   st.push(40);
   st.push(80);
   st.push(90);
  cout<<" print all element in stack \n ";
   while(!st.empty()){
    cout<<"\t"<<st.top();

    st.pop();
   }
}