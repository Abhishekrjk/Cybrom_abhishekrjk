#include <iostream>

using namespace std;

  int main()
  {

      int x,y,z,c=1;
      for(x=10;x>=1;x--)
      {
          for(y=1;y<=x;y++)
          {
              cout<<" ";
          }
            //cout<<endl;
          for(z=1;z<=c;z++)
            {
                cout<<" *";

            }


         cout<<endl;

            c++;

      }
  }

