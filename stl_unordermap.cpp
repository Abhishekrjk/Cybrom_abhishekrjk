#include<iostream>
#include<unordered_map>

using namespace std;
int main(){

  unordered_map<string,int> m;

  m["B"]=66;
  m["C"]=67;
  m["D"]=68;

   m["A"]=65;
    m["E"]=69;

 cout<<" \n size od map   "<<m.size();
 m.insert({"F",70});
 m.insert({"F",75});

 cout<<" \n size of  map after insertion  "<<m.size();
 cout<<" \n size od map ";
  for( auto x:m){
    cout<<"\n"<<x.first<<"\t"<<x.second;
  }
 cout<<" \n value of f map  "<<m["F"];
 cout<<"\n  value of key  in  map "<<m.at("A");
}
