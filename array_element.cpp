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
   cout<<"\n array one by one  Element by for loop \t ";
   for(auto a:varr2){
    cout<<"\t"<<a;

   }
cout<<"\n after 5 add in array \t "<<varr2.sum();
   return 0;
}
