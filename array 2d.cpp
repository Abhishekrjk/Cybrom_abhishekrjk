#include <iostream>
using namespace std;

int main()
{

    int a[2][2];

   for(int x=0;x<=1;x++)
   {

           for(int y=0;y<=1;y++)
{


       cout<<"Enter val for cell"<< x << " ->" ;
       cin>>a[x][y];
}

   }
{



 cout<<"*********************************"<<endl;
 for(int x=0;x<=1;x++)
 {


     for(int y=0;y<=1;y++)
     {
         cout<<"val of cell "<< x <<" , "<< y <<" , "<<a[x][y]<<endl;
     }
 }
}
   }




