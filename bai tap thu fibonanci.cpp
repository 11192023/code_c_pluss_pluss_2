#include<iostream>
using namespace std;
void solve(int n){
	cout<<"0 1 ";
	long long fn2=0,fn1=1;
	for(int i=3;i<=n;i++){
		long long fn=fn1+fn2;
		cout<<fn<<" ";
		fn2=fn1;
		fn1=fn;
	}
}
int  solve2(long long n){
	if(n==1||n==0)return 1;
	long long fn2=0,fn1=1;
	for(int i=3;i<=93;i++){
		long long fn=fn1+fn2;
		if(fn==n)return 1;
		fn2=fn1;
		fn1=fn;
	}
	return 0;
}
int main(){
	int t;
	t=1;
	while(t--){
		long long n;
		cin>>n;
		if(solve2(n))cout<<"YES";
		else cout<<"NO";
		}
		
	return 0;
}
