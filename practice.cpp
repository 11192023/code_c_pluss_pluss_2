#include<iostream>
using namespace std;
const int mod=(int)1000000007;
long long binpow(long long a,long long b,long long m){
	long long res=1;
	a%=m;
	while(b){
		if(b%2==1){
			res*=a;
			res%=m;
		}
		a*=a;
		a%=m;
		b/=2;
	}
	return res;
}
int inverse(long long a,long long m){
	return binpow(a%mod,mod-2,mod);
}
long long f[1000001];
int main(){
	long long n,k;
	cin>>n>>k;
	f[0]=1;
	for(int i=1;i<=n;i++){
		f[i]=i*f[i-1];
		f[i]%=mod;
	}
	cout<<(f[n]%mod)*inverse(f[n-k]*f[k]%mod,mod)%mod<<endl;
	return 0;
}


