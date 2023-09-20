#include<bits/stdc++.h>
using namespace std;
int solve(long long n){
if(n==1||n==0)return 1;
int fn2=0;int fn1=1;
for(int i=3;i<=93;i++){
	long long fn= fn1+fn2;
	if(fn==n)return 1;
	fn2=fn1;
	fn1=fn;
}return 0;
}
int nt(long long n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)return 0;
	}return n>1;
}
int sum(long long n){
	int cnt=0;
	while(n){
		cnt+=n%10;
		n/=10;
	}return solve(cnt);
}
int main (){
	long long n;
	cin>>n;
	for(int i=0;i<=n;i++){
		if(sum(i)&&nt(i)){
			cout<<i<<" ";
		}
	}return 0;
}
