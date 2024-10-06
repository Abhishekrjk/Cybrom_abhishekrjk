// C++ program to demonstrate the use of std::unique
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main()
{    vector<int>x;
    vector<int> v = { 1, 1, 3, 3, 3,  10,35,87,1, 3, 3, 7, 7, 8 ,10};


       sort(v.begin(),v.end());
     for( int x:v){
        cout<<"\t"<<x;
     }
      vector<int>  ::iterator ip;
    // Using std::unique
    ip = std::unique(v.begin(), v.begin() + v.size());
    // Now v becomes {1 3 10 1 3 7 8 * * * * *}
    // * means undefined


    // Resizing the vector so as to remove the undefined
    // terms
    v.resize(std::distance(v.begin(), ip));

    // Displaying the vector after applying std::unique
    cout<<"\n unique digit in vector";
    for (ip = v.begin(); ip != v.end(); ++ip) {
        cout << *ip << " ";
    }
}

