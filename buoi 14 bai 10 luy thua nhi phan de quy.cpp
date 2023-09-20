#include<iostream>
using namespace std;
const int mod=1000000007;
long long binaryexponentiation(long long base,long long aponent){
	if(aponent==0)return 1;
	else if(aponent%2==0){
		long long temp=binaryexponentiation(base,aponent/2)%mod;
		return (temp*temp)%mod;
	}
	else{
		long long temp=binaryexponentiation(base,(aponent-1)/2)%mod;
		return (base*((temp*temp)%mod))%mod;
	}
}
int main(){
	long long base,aponent;
	cin>>base>>aponent;
	long long result=binaryexponentiation(base,aponent);
	cout<<result<<endl;
	return 0;
}
