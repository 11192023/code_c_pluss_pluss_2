#include<iostream>
#include<cmath>
using namespace std;
long long sum(long long n){
	if(n==1)return -1;
	return pow(-1,n)*n+sum(n-1);
}
int main(){
	long long n;
	cin>>n;
	cout<<sum(n);
	return 0;
}
