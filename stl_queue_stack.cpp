#include<bits/stdc++.h>
using namespace std;
struct Queue{
    stack<int> s1 ,s2;
    void enQueue(int x){
        while(! s1.empty()){
            s2.push(s1.top());
            s1.pop();
        } 

        while(! s2.empty()){
            s1.push(s1.top());
            s2.pop();
        }     
        
          }
};
 int main(){
    Queue q;
    q.enQueue(10);
    q.enQueue(20);
    q.enQueue(30);
    q.enQueue(40);


 }