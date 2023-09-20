#include<iostream>
using namespace std;
int main(){
	int a=10;
	int b=20;
	int c=30;
	int* d[3]={&a,&b,&c
	};
	for(int i=0;i<3;i++){
		cout<<*d[i]<<endl;
	}
	return 0;
}