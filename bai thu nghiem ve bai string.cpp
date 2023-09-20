#include<iostream>
using namespace std;
int factorial(int num){
	int fac=1;
	for(int i=1;i<=num;i++){
		fac*=i;
	}
	return fac;
}
int sum(int n){
	string s=to_string(n);
	const int max=100;
	int a[max];
	int count=0;
	for(int i=0;i<s.length();i++){
		a[count]=s[i]-'0';
		count++;
	}
	int sums=0;
	for(int i=0;i<count;i++){
		sums+=factorial(a[i]);
	}
	return sums;
}
int main(){
	int n;
	cin>>n;
	int result=sum(n);
	if(n==result){
		cout<<"1";
	}
	else{
		cout<<"0";
	}
	return 0;
}
