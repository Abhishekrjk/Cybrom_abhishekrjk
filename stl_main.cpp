//stl = The  standard Template Library consist 
#include<iostream >
#include<algorithm>
using namespace std;
int main(){
    int arr [6]={1,2,3,4,5,6};
    int count =0;
    for(int i=0;i<6;i++){
        if(arr[i]>0){
         count++;
        }
        
    }
    if(count==6){
        cout<<"All elenment are positive  ";
    }
    else{
         cout<<"All elenment are not  positive  ";
    }
    return 0;

}