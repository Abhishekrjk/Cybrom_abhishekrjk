#include<iostream>
using namespace std;
template<class T>
T compare(T a , T b)
{
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

int main ()
{
    int i1 =10;
    int i2 =20;
    cout<<"\n compare two Integer : "<<compare(i1,i2);
    float f1 =15.6;
    float f2=23.54;
     cout<<"\n compare two flout : "<<compare(f1,f2);
    double d1 = 1.8;
    double d2 = 6.76;
      cout<<"\n compare two double : "<<compare(d1,d2);

     char ch1= 'A';
    char ch2 ='a';
      cout<<"\n compare two char : "<<compare(ch1,ch2);
       return 0;
      


}
 /*
 explain temlate in c++ progarm 
 anss == c++ template are the foundation genric programming  which involve write code  in way 
 */