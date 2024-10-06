//linear search code but only sequence search


#include<iostream>
using namespace std ;
int linearsearch(int arr[], int item,int size){
  int found =-1;
     //int items=45;
  for(int i =0;i<size;i++)//i=7
  {
      if(arr[i]==item){
          found=i+1;//8
        }
  }
}

int main()
{
    int arr[]={100,56,200,78,300,23,78,45};
    int items=45;

    int pos = linearsearch( arr, items,8);
    if(pos==-1){
        cout<<"searching unsuccessful " ;
           }
           else{
            cout<<"searching successful "<<pos;
           }

    return 0;

}
