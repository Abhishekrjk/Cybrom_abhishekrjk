# include<iostream>
using namespace std;
 void partition(int arr[],int low ,int high)
 {

     int x,y,pivot;
     x=low-1;
     pivot=arr[high];
     for(y=low;y<=pivot;y++)
     {
       if(arr[y]<pivot)
        {
        x++;
 swap(arr[x],arr[y]);
       }
     }
     swap(x+1,pivot);
     return x+1;

 }

 void quickshort(int arr[],int low ,int high)
 {
     if(low<hgh)
     {
         int pos = partition(arr,low,high);
         quickshort(arr,low,pos-1);
         quickshort(arr,pos+1,high);
     }
 }

