#include<iostream>
#include<algorithm>
using namespace std;
int main(){

int arr[6]={40,90,20,80,111,30};
int max=arr[0];
int min1 =arr[0];
int min2=0;
int i;
/*for(int i =0;i<=6;i++){
   if(arr[i]>max){
    max=arr[i];
   }
}
/8for(int i =0;i<=6;i++){
   if(arr[i]<min1){
      min2=min1;
    min1=arr[i];
   }
}
*/
sort(arr,arr+6);
//maximum number


//cout<<"minimum array number => "<<arr[0]<<endl;
//cout<<" \n second minimum array number => "<<arr[1]<<endl;
cout<<"minimum array number => "<<arr[0]<<endl;
cout<<" \n second minimum array number => "<<arr[1]<<endl;

return 0;

}
