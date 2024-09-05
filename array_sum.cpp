#include<iostream>
#include<algorithm>
#include<valarray>
using namespace std;
int main()
{
   valarray<int>varr={1,2,34,665,65,62,23,443};
   cout<< "\t sum of array \t "<<varr.sum();
   valarray<int>varr2=varr.apply([](int x){
   return x=x+5;
   });
   cout<<"\n after 5 add in array"<<varr2.sum();
   return 0;

   for(auto a:varr2){
    cout<<"\t"<<a;
     return 0;
   }

}
