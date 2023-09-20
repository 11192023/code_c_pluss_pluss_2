#include<iostream>

using namespace std;
typedef long long ll;
long long gcd(ll a, ll b){
	while(b){
		long long r=a%b;
		a=b;
		b=r;
	}return a;
	
}
int main(){
	long long a,b;
	cin>>a>>b;
	long long GCD=gcd(a,b);
	long long LCM=a/gcd(a,b)*b;
	cout<<GCD<<" "<<LCM;
	return 0;
}
