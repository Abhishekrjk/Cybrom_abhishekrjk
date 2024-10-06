#include<iostream>
#include<map>
#include<iterator>
using namespace std;
int main(){

  map<string,int> m;
  m["A"]=608;
  m["B"]=66;
  m["C"]=635;
  m["D"]=68;
  m["E"]=69;


 cout<<" \n size od map   "<<m.size();
 m.insert({"F",70});
 m.insert({"F",75});

 /*cout<<" \n size of  map after insertion  "<<m.size();
 cout<<" \n size od map ";
  for( auto x:m){
    cout<<"\n"<<x.first<<"\t"<<x.second;
  }
 cout<<" \n value of f map  "<<m["F"];
 cout<<"\n  value of key  in  map "<<m.at("A");*/

 for(auto x=m.begin();x!=m.end();x++){
    cout<<"\n key of element  : "<<x->first<<"\t value of element : "<<x->second;
 }
}
