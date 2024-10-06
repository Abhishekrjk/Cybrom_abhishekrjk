#include<iostream>
#include<vector>
using namespace std;

 int main()
 {

     vector <int>v={10,8,9,6,5};
     cout<<"no of element " <<v.size()<<endl;
     v.push_back(20);
     v.push_back(23);
     v.push_back(24);

    cout<<"no of element " <<v.size()<<endl;
    for(int i:v)
    {
        cout<<i<<"\t";
    }
    cout<<endl;

    for(auto j=v.begin();j!=v.end();j++)
    {
        cout<<*j<<"\t";

    }
        cout<<endl;



  v.pop_back();
  for(auto j=v.begin();j!=v.end();j++)
  {
        cout<<*j<<"\t";
  }

        cout<<endl;
         v.clear();
        for(auto j=v.begin();j!=v.end();j++)
  {
        cout<<*j<<"\t";
  }

        cout<<endl;

 }
