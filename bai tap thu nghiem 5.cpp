#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	bool primes[n+1];
		for(int i =2;i<=n;i++){
		
		primes[i]=true;}
		for(int i=2;i<=sqrt(n);i++){
			if(primes[i]){
				for(int j =i*i;j<n;j+=i){
				
				primes[j]=false;
			}
	}
			
	}

for(int i =2;i<=n;i++){
	if(primes[i]){
	
	cout<<i<<" "; 
	}
}cout<<endl;
return 0;
}
