#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int count=0;
    int arr1[6]={1,2,3,4,5,6};
bool result =binary_search(arr1,arr1+6,3);
if(result){
    cout<<"elements is found"<<endl;

}
else{
    cout<<"elements are not found"<<endl;
}

    return 0;

}