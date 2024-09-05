#include<iostream>
using namespace std;

   int main(int argc, char *argv[] )
   {
       cout<<" number of arguments =  "<<argc<<endl;
       for(int i=0; i<argc; i++)
       {
            cout<<i<<"  arguments =  "<<argv[i]<<endl;
       }
   }
