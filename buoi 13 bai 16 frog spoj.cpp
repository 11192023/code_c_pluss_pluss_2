#include<iostream>
using namespace std;
const long long mod =1000000000+7;
long long n;
void xuly (long long n){
	long long a[n+1]={0};
	a[0]=1;
	a[1]=1;
	a[2]=2;
	for(int i=3;i<=n;i++){
		a[i]=a[i-1]+a[i-2]+a[i-3];
		a[i]%=mod;
	}
	cout<<a[n]<<" ";
}
int main(){
 long long n;
 cin>>n;
 xuly(n);
 return 0;
}
