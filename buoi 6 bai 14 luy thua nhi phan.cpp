#include<iostream>
using  namespace std;
const int mod = 1e9+7;
long long pow (long a ,long long b){
	long long res =1;
	while(b){
		if(b%2==1){
			res=(res*a);
			res %=mod;
		}b=(b/2);
		a=(a*2);
		a%=mod;
	}return res;
}
int main(){
	long long a, b;
	cin>>a>>b;
	cout<<pow(a,b)<<endl;
	return 0;
}
