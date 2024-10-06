#include<iostream>
#include<vector>
using namespace std;
void display( vector<int>&abhi)
{
    int max1;
    for(int i=0;i<abhi.size();i++){
        cout<<"\t"<<abhi[i];
    }
    for(int i=0;i<abhi.size();i++){
        if(abhi[i]>max1){
            max1=abhi[i];
        }
    }
  sort(abhi.begin(),abhi.end());
   // cout<<"\t"<<abhi.max_size();
    // cout<<"\n"<<max1;

}

int main()
{
    vector<int>g1;

    int num,size;
    cout<<"Enter the size of your veztor";
    cin>>size;
    for(int i=0;i<size;i++){
         cout<<"enter youtr num";
    cin>>num;
    g1.push_back(num);


    }

    display(g1);
  //  cout<<"\t"<<g1.size();



return 0;

}
