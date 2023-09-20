#include<iostream>
using namespace std;
const int mod=(int)1000000007;
int check(long long a,long long b){
	if(b==0){
		return 1;
	}
	int r=check(a%mod,(b/2)%mod)%mod;
	if(b%2==1){
		return ((a%mod*r)%mod*r)%mod;
	}else{
		return (r*r)%mod;
	}
}
int main(){
	long long a,b;
	cin>>a>>b;
	cout<<check(a%mod,b%mod)%mod;
	return 0;
	
}
