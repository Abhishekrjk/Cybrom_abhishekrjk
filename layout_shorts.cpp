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
void bubbleshort(int ar[] ,int n)
{
for(int i=0;i<n-1;i++)//pass
   {
       cout<<"pass : "<<i+1<<" ";
       for(int j=0;j < n-i-1;j++)
       {
           if(ar[j]>ar[j+1])
       {
           swap(ar[j],ar[j+1]);
       }

    for (int r=0;r<=1;r++)
    {
      cout<<ar[r]<<"\t";
  }
       }
      cout<<" " <<endl;   }
}
void print(int ar[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
     cout<<endl;
}
void insertion(int ar[],int n)
{

    int key,j;

     for(int i=1;i<n;i++){
        key=i;
        j=i-1;

     }
     while(j>=0 &&
           ar[j]>key)
            {
              ar[j+1]=ar[j];
              j=j-1;
            }
            ar[j+1]=key;
   for (int k=0;k<n;k++)
    {
      cout<<ar[k]<<"\t";
  }
  }

int main()
{
    int ar[5]={2,4,6,1,8};
    int e;
    int n = sizeof (ar)/sizeof(ar[0]);

cout<<"1=validateArray "<<endl;
cout<<"2=bubbleshort"<<endl;
cout<<"3=insertion_short "<<endl;
cout<<" =Enter your choise  ";
cin>>e;
   switch(e)
   {
   case 1 :
    cout<<" validateArray  = ";
    validatearray(ar,n);
    break;

   case 2 :

         cout<<"  bubbleshort  = ";
         bubbleshort(ar,n);
         print(ar,n);
         break;

   case 3 :

        cout<<" insertion_short  = ";
         insertion(ar ,n);
         break;
    }

}

