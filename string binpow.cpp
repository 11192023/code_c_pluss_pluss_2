#include<iostream>
using namespace std;
long long result(string s,long long b){
	int res=0;
	for(int i=0;i<s.length();i++){
		res=res*10+(s[i]-'0');
		res%=b;
	}
	return res;
}
long long binpow(long long a,long long b,long long m ){
	long long res=1;
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
int main(){
	string s;
	long long a,b;
	cin>>s>>a>>b;
	long long result1=result(s,b);
	cout<<binpow(result1,a,b);
	return 0;
}
