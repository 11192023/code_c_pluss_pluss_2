#include<iostream>
using namespace std;
long long fibonanci(long long n){
	if(n==1&&n==0){
		return n;
	}
	return fibonanci(n-1)+fibonanci(n-2);
}
int main(){
	long long n;
	cin>>n;
	cout<<fibonanci(n);
	return 0;
}
