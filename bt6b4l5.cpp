#include<bits/stdc++.h>
using namespace std ;
int main(){
	long long a,b;
	cin>>a>>b;
	cout<<_gcd(a,b)<<endl;
	cout<<a*b/_gcd(a,b);
	return o;
}

/*dung cong edlid*/

long long gcd(long long a,long long b){
	while (b!=0){
		long long r= a%b;
		a=b;
		b=r;
	}
	return a;
}
