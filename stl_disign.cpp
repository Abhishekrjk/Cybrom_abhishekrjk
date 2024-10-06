#include<iostream>
using namespace std;
template <typename T> class Test
{

    T data;
public:
    void setData(T value)
    {
        data=value;
        data.getDetail();
        data.print();

    }
    void print()
    {
        cout<<"data""\t"<<data<<endl;
    }
};



class product
{
    int pid;
    string name;
    double price;
public:
    void getDetail()
    {
        pid=111;
        name="mobile";
        price=30000;

    }
    void print()
    {
        cout<<"product id""\t"<<pid<<endl;
        cout<<"product name""\t"<<name<<endl;
        cout<<"product price""\t"<<price<<endl;

        }
};
int main()
{
    product p;
    Test<product>obj;
    obj.setData(p);


}
