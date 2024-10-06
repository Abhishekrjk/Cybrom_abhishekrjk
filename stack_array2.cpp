// Stack Implementation Using Array
#include<iostream>
using namespace std;
#define N 5
int stack[N];
int top=-1;
void push(int data){
	if(top==N-1){
		cout<<"This is Overflow condition";
	}//step1  : check overflow condition
	else{
		//step2: increase top by 1
		top++;
		//step3: store data
		stack[top]=data;
		cout<<"\nData insert success";
	}
}

int pop(){
	//step1: check under flow
	int value=0;
	if(top==-1){
		cout<<endl<<"Under flow condition";
	}else{
		//step2: store top element value
		value=stack[top];
		//step3: decrease top by 1
		top--;

	}
	//step4 : return deleted value
	return value;
}

int peek(){
if(top==-1){
	cout<<"\nUnder flow";
}else{
	return stack[top];
}
}
int main(){
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	cout<<"\n Top Element of the Stack : "<<peek();
	cout<<"\n Deleted Data : "<<pop();
	cout<<"\n Deleted Data : "<<pop();
	cout<<"\n Top Element of the Stack : "<<peek();

	cout<<"\n Deleted Data : "<<pop();
	cout<<"\n Deleted Data : "<<pop();
	cout<<"\n Deleted Data : "<<pop();
	cout<<"\n Deleted Data : "<<pop();
	return 0;
}
