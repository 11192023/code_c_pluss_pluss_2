#include<iostream>
#include<cmath>
using namespace std;
long long prime[1000001];
void sieve(){

for(int i=0;i<=1000000;i++)
	 prime[i]=1;
	 prime[1]=prime[0]=0;

for(int i=2;i<=1000;i++){
	if(prime[i]){
		for(int j=i*i;j<=1000000;j+=i){
			prime[j]=0;
		}
	}
}
}
int main(){
	sieve();
	int t;
	t=1;
	while (t--){
	
		long long n;
		cin >>n;
		for(int i =1;i<=sqrt(n);i++){
			if(prime[i]){
				cout<<i*i<<" ";
			}
		}
	}cout<<endl;
	return 0;
}


