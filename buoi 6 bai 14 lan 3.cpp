#include<iostream>
using  namespace std;
const int mod = 1e9+7;
long long pow (long a ,long long b){
	long long res =1;
	while(b){
		if(b&1){
			res=(res*a)%mod;
			
		} a=(a*a)%mod;
		b>>=1;
	}return res;
}
int main(){
	long long a, b;
	cin>>a>>b;
	cout<<pow(a,b)<<endl;
	return 0;
}
