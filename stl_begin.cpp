#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> ar ={10,20,44,30,40};
    //Declaring iteration to a vector
    vector<int>::iterator ptr;

    cout<<"The vector element are";
    for( ptr =ar.begin();ptr<ar.end();ptr++)
        cout<<"\t"<<* ptr<<" ";

}

