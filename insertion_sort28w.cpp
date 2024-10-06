#include<iostream>
using namespace std;

int main()
{
int arr[5]={2,6,7,1,9};
int i,j,key,flag;


    for(i=1;i<5;i++)
    {
        flag=0;
        key=arr[i];
        j=i-1;
    cout<<"pass "<< i <<"  ";
    while(j>=0 && arr[j]>key)
    {
        arr[j+1]=j;
        j=j-1;
        flag=1;

    }
    arr[j+1]=key;
    if(flag==0)
    for (int r=0;r<5;r++)
    {
      cout<<arr[r]<<"\t";
  }
  cout<<endl;
}
}
