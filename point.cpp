#include<iostream>
using namespace std;
int main(){
	int a=10;
	int**b;
	int c=20;
	int *d=&c;
	cout<<d<<" "<<*d<<endl;
    b=&d;
    cout<<b<<" "<<**b<<endl;
    a=**b;
    cout<<a<<endl;
	return 0;
}
