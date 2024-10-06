/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>g1;
    for(int i=1;i<=10;i++){
        g1.push_back(i*i);
    }
   for(int a:g1){
       cout<<"\t"<<a;
   }
   g1.erase(g1.begin()+3,g1.begin()+6);
   cout<<"\n after erase mathode \n";
   for(int a:g1){
       cout<<" \t"<<a;
   }

    return 0;
}
