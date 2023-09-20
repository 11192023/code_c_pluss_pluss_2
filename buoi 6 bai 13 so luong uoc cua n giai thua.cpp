#include <iostream>
#include<cmath>
using namespace std;
const long long mod = 1e9+7;
long long check(long long n, long long p){
	int cnt= 0;
	for(int i =p;i<=n;i*=p){
		cnt+=n/i;
	}return cnt ;
}
long long nt(long long n){
	for(int i= 2; i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return n>1;
}
long long count (long long n){
	int cnt =1;
	for(int i=1;i<=n;i++){
		if(nt(i)){
			cnt=(cnt*(check(n,i)+1))%mod;
			
		}
	}return cnt;
}
int main(){
	int t ;
	t =1;
	while(t--){
		long long n;
		cin>>n;
		cout<<count(n)<<endl;
		
	}return 0;
	
}
