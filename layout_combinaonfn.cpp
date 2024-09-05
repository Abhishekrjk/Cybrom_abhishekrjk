#include <iostream>
using namespace std;
void validatearray(int arr[] ,int size)
{
    int sum =0;
    for(int i=0;i<size;i++)
    {
        sum = sum +arr[i];
    }
    cout<<sum<<endl;

}
void bubble short(int arr[] ,int size)
{

}
int main()
{
    int ar[5]={2,4,6,1,8};
    int n = sizeof (ar)/sizeof(ar[0]);
    validatearray(ar,n);
}
