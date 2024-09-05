

//decimal to binary code

#include<iostream>
using namespace std;
int main()
{   int num;
    cout<<"Enter  your number ";
    cin>>num;
    int  i=0;
    int arr[24];
    while(num>0){    // 12=1100
        arr[i]=num%2;  // 0
        num =num/2; //6
        i++;
    }
    for(int j=i;j>=0;j--){
         cout<<arr[j]<<" ";
    }
    return 0;



}
