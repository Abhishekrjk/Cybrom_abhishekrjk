#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr1[5]={1,2,4,5,7};
    int arr2 [5];

    copy_n(arr1,6,arr2);
    cout<<"\n erlemnt of array 2 \n";
    for(int i =0;i<5;i++){
         cout<<"\t"<<arr2[i];
    } return 0;
}