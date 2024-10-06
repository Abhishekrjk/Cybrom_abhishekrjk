#include<iostream>
#include<vector>
#include<iterator>

using namespace std;
int main(){

  vector<int> v={112,23,45,2,12,90};
  vector<int>::iterator  itr=v.begin();
  cout<<*itr<<"\t";
  advance(itr,3);
  cout<<"after  position using iterator "<<*itr;
  return 0;

}
