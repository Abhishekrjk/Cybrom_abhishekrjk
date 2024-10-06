#include<iostream>
using namespace std;
 #define N 5
 int Q[N];
 int font =-1;
 int rear =-1;
 void enq(int data){
     if(N-1==rear)
     {
         cout<<"this is overflow condition";
         return;
     }

     if(font==-1&&rear==-1)
     {
         font++;
         rear++;

         Q[rear]=data;
         cout<<"first element insertion is success on Queue";
     }
     else
        {
            rear++;
            Q[rear]=data;
            cout<<"insertion  success in Queue";
        }

 }
 void display(){
     if(font==-1&&rear==-1){
    cout<<"\n Queue is empty";
     }
     else{
        cout<<"\n element of the Queue : \n";
        for(int i=0;i>=0;i++)
        {
            cout<<"==>"<<Q[i];
        }
     }
 }
 int main()
 {
     enq(10);
     enq (20);
     enq (30);
     enq (40);
     enq (50);
     return 0;


 }
 /* */
