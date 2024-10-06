// binary search

#include<iostream>
using namespace std ;
int binarysearch(int arr[],int item,int size){
    int low =0;
     int high=8;
     int mid= (low+high)/2;
     while(low<=high){
        mid = (low+high)/2;
        if(arr[mid]==item){
            return mid+1;

        }
        if(item>arr[mid]){
            low=mid+1;

        }
        if(item<arr[mid]==item){
            high=mid+1;
        }
        return -1;
     }



}
int main()
{
     int arr[]={100,56,200,78,300,23,78,45};
    int items=45;

    int pos = binarysearch( arr, items, 8);
    if(pos==-1){
        cout<<"searching unsuccessful " ;
           }
           else{
            cout<<"searching successful "<<pos;
           }

    return 0;
}
