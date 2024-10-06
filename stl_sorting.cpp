#include<iostream>
#include<algorithm>
using namespace std;


int main()
{
    int arr[5]={30,10,20,40,50};
    cout<<"\n before sorting \n";
    for( int i=0;i<5;i++){
        cout<<"\t"<<arr[i];
    }
    sort(arr,arr+5,greater<int>()); //  desending order "" sort(begin(arr),end(arr)); "" asending order 
    cout<<"\n before sorting \n";
     for( int i=0;i<5;i++){
        cout<<"\t"<<arr[i];
    }
    return 0;

}
