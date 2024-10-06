#include <iostream>
#include<deque>
using namespace std ;
int main(){
    deque<int> dq={10,20,30,40};
    dq.push_back(70);
    dq.push_front(7);
    for(int a:dq){
        cout<<"\t"<<a;
    }
}