#include<iostream>
using namespace std;
const int mod=(int)1000000007;
int binpow(long long a,long long b){
	int res=1;
	a%=mod;
	while(b){
		if(b%2==1){
			res*=a;
			res%=mod;
		}
		a*=a;
		a%=mod;
		b/=2;
	}
	return res;
}
int main(){
	long long a,b;
	cin>>a>>b;
	cout<<binpow(a,b);
	return 0;
}
