
#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<string>g1;
    g1.push_back("Abhishek");
    g1.push_back("Aakash");
    g1.push_back("Aniket");
    g1.push_back("Aarfti");
    g1.push_back("Abhinav");
    cout<<"\n print all names\n";


   cout<<"\n after iterator mathode \n";
   for(auto i=g1.begin();i!=g1.end();i++){
       cout<<'\n'<<*i;
   }


    return 0;
}
