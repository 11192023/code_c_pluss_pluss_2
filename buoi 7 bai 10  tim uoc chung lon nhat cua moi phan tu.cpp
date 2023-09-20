#include<iostream>
using namespace std;
int gcd(int a,int b){
	if(b==0)return a;
	return gcd(b,a%b);
}
int gcd_mang(int a[],int n){
	int x =a[0];
	for(int i=1;i<n;i++){
		x=gcd(x,a[i]);
	}return x;
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i =0;i<n;i++){
		cin>>a[i];
	}cout<<gcd_mang(a,n);
	return 0;
}
