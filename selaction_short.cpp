# include<iostream>
using namespace std;
int main ()
{
    int arr[5]={3,6,7,3,9};
    int a,min_index,i,j,k;
    int n=sizeof( arr)/sizeof(arr[0]);


    for(i=0;i<n-1;i++)
    {
        min_index=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[min_index]>arr[j])
        {
            min_index=j;

        }
        }

    if(min_index !=i)
        swap(arr[min_index],arr[i]);

}
for(int k=0;k<n;k++)
{
    cout<<arr[k]<<"\t";

}
cout<<endl;
}
