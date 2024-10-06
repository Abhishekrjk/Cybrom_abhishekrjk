//
#include<iostream>
using namespace std;
#define N 5
int stack[N];
int top=-1;
void push(int data){
if(top==N-1){
cout<<"This is Overflow condition";
}//step1 : check overflow condition
else{
//step2: increase top by 1
top++;
//step3: store data
stack[top]=data;
cout<<"\nData insert success -> "<<data;
}
}
int main(){
push(10);
push(20);
push(30);
push(40);
push(50);
return 0;
}
