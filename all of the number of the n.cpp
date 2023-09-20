#include<iostream>
using namespace std;
int binpow(int a,int b){
	int res=1;
	while(b){
		if(b%2==1){
			res*=a;
		}
		a*=a;
		b/=2;
	}
	return res;
}
int main(){
	int a,b;
	cin>>a>>b;
	cout<<binpow(a,b);
	return 0;
}
