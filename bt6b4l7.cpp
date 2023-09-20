
#include<iostream>

typedef long long ll;

ll gcd(ll a,ll b){
	while (b){
		ll r= a%b;
		a=b;
		b=r;
	}
	return a;
}
int main(){
	ll a,b;
std ::	cin>>a>>b;
	ll GCD = gcd(a, b);
	
	ll LCM = (a*b)/GCD;
std ::	cout<< GCD <<  " "<<LCM<<std::endl;
	return 0;
}

