#include<iostream>
#include<cmath>
using namespace std;
bool ktnt (long long n){
	if(n<2)return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)return false;
	}return true;
}
long long check(int n){
	for(int i=1;i<=32;i++){
		if(ktnt(i)){
			long long temp =(long long)pow(2,i)-1;
		if(ktnt(temp)){
			long long hh =1ll*temp*(long long)pow(2,i-1);
		if(hh==n)return 1;}
	}
	}return 0;
}
int main (){
	int n;
	cin>>n;
	if(check(n))cout<<"YES";
	else cout<<"NO";
	return 0;
}

