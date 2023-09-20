#include<iostream>
using namespace std;
void swap(int ***a,int ***b){
	int tmp=***a;
	***a=***b;
	***b=tmp;
}
int main(){
	int a=10;
	int b=20;
	int *c=&a;
	int *d=&b;
	int **h=&c;
	int **e=&d;
	swap(&h,&e);
	cout<<c<<endl;
	cout<<d<<endl;
	cout<<"h: "<<*h<<endl;
	cout<<"e: "<<*e<<endl;
	return 0;
}
