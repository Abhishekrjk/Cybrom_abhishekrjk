
#include<iostream>
using namespace std;

int main(){
	int n=12312345;
	int freq[8]={0};
	while(n!=0){//n=0
	int r=n%10;//r=1
	freq[r]++;//freq[1]++
	n=n/10;
	}
	cout<<"\nPrint Unique Element \n";
	for(int i=0;i<8;i++){
		if(freq[i]==1){
			cout<<"\t"<<i;
		}
	}

	cout<<"\nPrint Duplicate Element \n";
	for(int i=0;i<8;i++){
		if(freq[i]>1){
			cout<<"\t"<<i;
		}
	}

	return 0;
}
