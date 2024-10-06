#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={1,45,54,71,43,67,89,34,25,999};
    int size=sizeof(arr)/sizeof(int);
    cout<<"array size"<<size;
    cout<<"\n maximum element: "<<*max_element(arr,arr+(size));
    cout<<endl;
  cout<<" \n minimum element: "<<*min_element(arr,arr+size);
    return 0;

}
