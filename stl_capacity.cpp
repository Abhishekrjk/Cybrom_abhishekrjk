#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> g1;
    for(int i =0;i<=5;i++)
        g1.push_back(i);
    cout<<"\n size : "<<g1.size();
    cout<<"\n capacity : "<<g1.capacity();
    cout<<"\n max_size \n : "<<g1.max_size();
    //resizes tghe vector soze
    g1.resize(4);
       cout<<"\n vector  element ";
     for(auto it =g1.begin();it!=g1.end(); it++)
        cout<<"\t"<<*it<<" ";


      cout<<"\n size : "<<g1.size();

      if(g1.empty()== false)
        cout<<"\n vector is not empty";
      else
        cout<<"\n vector is empty";

    g1.shrink_to_fit();
    cout<<"\n vector  element ";
    for(auto it =g1.begin();it!=g1.end(); it++)
        cout<<*it<<" ";



}
