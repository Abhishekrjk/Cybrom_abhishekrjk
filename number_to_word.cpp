#include<iostream>
using namespace std;
int main()
{
    int n,i,num=0;
    cout<<"Enter any numbers to convert in words: ";
    cin>>n;


    while(n!=0)
    {
        num=(num*10)+n%10;
        n=n/10;

    }
    for(i=num;i>=0;i=i/10)
    {

        switch(i%10)
        {
        case 0:
            cout<<"Zero ,";
            break;
            case 1:
            cout<<"one ,";
            break;
            case 2:
            cout<<"two ,";
            break;
            case 3:
            cout<<"three ,";
           break;
            case 4:
            cout<<"four,";
            break;
            case 5:
            cout<<"five,";
            break;
            case 6:
            cout<<"six ,";
            break;
            case 7:
            cout<<"seven ,";
            break;
            case 8:
            cout<<"eight ,";
            break;
            case 9:
            cout<<"Nine ,";
           break;
        }


        cout<<endl;
    }
}
