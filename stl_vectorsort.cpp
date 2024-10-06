#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v{ 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };


    cout<<"before sorting vector ";



    sort(v.begin(), v.end());

    cout << " after Sorted \n";
    for (auto x : v){
        cout << x << " ";
    }
     sort(v.begin(), v.end(), greater<int>());

    cout << " decreasing order Sorted \n";
    for (auto g : v){
        cout << g << " ";
   }

}





}
