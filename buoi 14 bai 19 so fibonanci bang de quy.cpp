#include<iostream>
long long fibonanci(long long n){
	if(n==1)return 0;
	if(n==2)return 1;
	return fibonanci(n-1)+fibonanci(n-2);
	
}
using namespace std;
int main(){
	long long n;
	cin>>n;
	cout<<fibonanci(n);
	return 0;
}
