#include<iostream>
#include<queue>
#include<vector>

using namespace std;

int main(){
    // min heap queue
    priority_queue<int,vector<int>,greater<int> > q;
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