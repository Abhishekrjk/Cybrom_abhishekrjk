#include<iostream>
#include <vector>
using namespace std;
class product
{
public:
    int id ;
    string name;
    double price;
    float salary;
    void setInfo(int id,string name,double price)
    {
        this ->id =id;
        this->name =name;
        this->price=price;

    }
    void print()
    {
        cout<<"product ID"<<"\t"<<id<<endl;
        cout<<"product NAME"<<"\t"<<name<<endl;
        cout<<"product PRICE"<<"\t"<<price<<endl;
    }

};
int main()
{
    vector<product>v;
    product p1,p2,p3,p4;
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    int id;
    string n;
    double pi;
    for(product p:v)
    {
        cout<<"Enter product ID"<<endl;
        cin>>id;
        cout<<"Enter product NAME"<<endl;
        cin>>n;
        cout<<"Enter product PRICE"<<endl;
        cin>>pi;
        p.setInfo(id,n,pi);
        p.print();

    }

    }
