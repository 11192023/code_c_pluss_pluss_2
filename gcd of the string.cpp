#include<iostream>
using namespace std;
long long gcd(long a,long b){
	if(b==0)return a;
	return gcd(b,a%b);
}
int main(){
	string s;
	long long  a,b;
	cin>>s>>a>>b;
	string res="";
	for(int i=0;i<gcd(a,b);i++){
		res+=s;
	}
	cout<<res;
	return 0;
}
