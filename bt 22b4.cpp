#include<iostream>
#include<cmath>
using namespace std;
int cp(long long n){
	int can=sqrt(n);
	if(1ll*can*can==n)return 1;
	return 0;
}
int main(){
	long long n;
	cin>>n;
	if(cp(n)) cout<<"YES";
	else cout<<"NO";
	return 0;
}
