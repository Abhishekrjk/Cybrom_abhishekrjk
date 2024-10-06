#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int> q;
    q.push(10);
    q.push(30);
    q.push(60);
    q.push(20);
    q.push(40);
    q.push(70);
    q.push(90);
    q.push(80);
    q.push(100);
    while (!q.empty())
    {
        int x=q.top();
        q.pop();
        cout<<"\n deleted element : "<<x;
    }
    
}