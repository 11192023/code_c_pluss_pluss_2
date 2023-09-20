#include<iostream>
#include<cmath>
using namespace std;
int prime(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return n>1;
}
int check(int n){
	int r=n%10;
	while(n){
		if(n%10>r){
			return 0;
		}
		n/=10;
	}
	return 1;
}
int main(){
	int n;
	cin>>n;
	int cnt=0;
	for(int i=2;i<=n;i++){
		if(check(i)&&prime(i)){
			cout<<i<<" ";
			cnt++;
		}
	}
	cout<<cnt<<" ";
	return 0;
}
