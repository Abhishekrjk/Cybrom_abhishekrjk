#include<iostream>
using namespace std;

int main(){
 string s= "welcome to the city of lake bhopal";

 int count=1;
for(int i=0;s[i]!='\0';i++){
        if(s[i]==' '){
            count++;
        }

}

 cout<<"present word in string  = "<<count;
}
