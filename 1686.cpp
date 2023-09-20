#include<iostream>
using namespace std;
int main(){
	int a=10;
	int *b=&a;
	int **d=&b;
	cout<<*d<<endl;
	cout<<b<<endl;
	cout<<*b<<endl;
	return 0;
}
