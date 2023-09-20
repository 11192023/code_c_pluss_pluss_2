#include<iostream>
#include<cmath>
using namespace std;
bool ktnt (long long n){
	if(n<2)return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)return false;
		
	}return true;
}
bool cp(long long n){
	long long a=sqrt(n);
	if(1ll*a*a==n)return true ;
	return false;
}
int main (){
	long long n;
	cin>>n;
	int cnt =0;
	for(int i=2;i<=sqrt(n);i++){
		if( ktnt(i)){
			++cnt;
		}
	}cout<<cnt;
	return 0;
}
