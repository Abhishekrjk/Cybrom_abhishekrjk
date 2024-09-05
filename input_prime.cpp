#include<iostream>
using namespace std;



        bool isPrime(int num) {

    for (int i = 2; i< num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

   int findposition(int position){
        int count = 0;
        int num =2;
        int c=0;
        while(true){
          if(isPrime(num)){
             c++;



              if(c==position){
                cout<<num;
            }

           }
          num++;
        }



   }




int main(){
    int position;
    cout<<"enter position";
    cin>>position;

    int primenum=findposition(position);


}
