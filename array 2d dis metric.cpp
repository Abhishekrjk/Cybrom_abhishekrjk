#include <iostream>
using namespace std;

int main()
{


    int a[2][2]={10,11,12,13};
    int b[2][2]={10,11,12,13};
    int c[2][2];

  for(int x=0; x<=2; x++)
  {
      for(int y=0; y<=2; y++)
      {


        c[x][y]=a[x][y]+b[x][y];
      cout<<c[x][y]<<" " ;
       }
       cout<<endl;
}
}

