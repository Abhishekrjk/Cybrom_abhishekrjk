#include<iostream>
using namespace std;

int main()
{
    string str= "abcae";
    cout<<"Enter a String to count no_of_vowel in it : ";
    getline(cin,str);
    int countvowel(string,string,int,int);
    int n=0,p=-1,len,tv=0;
    cout << " The Given String is -> "<<str<<'\n';
    len=str.length();
    cout << " The Length of Given String is -> "<<len<<'\n';
    n=countvowel(str,"a",len,p);
    tv=tv+n;
    cout<<"\n vowel a : "<<n;
    n=0;

   n=countvowel(str,"e",len,p);
   cout<<"\n vowel e : "<<n;
   tv=tv+n;
   n=0;

    n=countvowel(str,"i",len,p);
    cout<<"\n vowel i : "<<n;
    tv=tv+n;
    n=0;

    n=countvowel(str,"o",len,p);
    cout<<"\n vowel o : "<<n;
    tv=tv+n;
    n=0;

    n=countvowel(str,"u",len,p);
    cout<<"\n vowel u : "<<n;
    tv=tv+n;
   // n=0;

    cout<< "\n ******* Number of Vowels in the given string are : " << tv<<" **************";
    return 0;
}

int countvowel(string str,string s,int len,int p )
{
    int temp=0;
    for(int i=0;i<len;i++)
    {
         p=str.find(s,i);

         if (p!=-1)
         {
             temp++;
             i=p;
        }
         //cout<<"******** "<<p<<endl;

    }

    //cout<< " Number of Vowels in the given string are : " << n;
    return temp;
}
