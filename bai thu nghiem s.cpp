#include<iostream>
#include<cmath>
using namespace std;
int prime[10001];
void sieve(){
	for(int i=0;i<=10000;i++){
		prime[i]=1;
		prime[0]=prime[1]=0;
		for(int i=2;i<=sqrt(10000);i++){
			if(prime[i]=1);
			for(int j=i*i;j<=10000;j+=i){
				prime[j]=0;
			}
		}
	}
}
int main(){
	sieve();
	int n;
	cin>>n;
	for(int i=2;i<=n;i++){
		cout<<prime[i]<<" ";
	}
	return 0;
}
