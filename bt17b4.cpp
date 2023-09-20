#include<bits/stdc++.h>
using namespace std;

long long nt(long long n){
	for(int i =2;i<=sqrt(n);i++){
		if(n%i==0)return 0;
	}return n>1;
}
long long check(long long n){
	for(int i=1;i<=32;i++){
		if(nt(i)){
			long long temp =(long long)pow(2,i)-1;
			if(nt(temp)){
				long long hh =1ll*temp*(long long)pow(2,i-1);
				if(hh ==n)return 1;
			}
			
		}
}return 0;
}
int main () 
{
	long long n;
	cin>>n;
	if(check(n))cout<<"YES";
	else cout<<"NO";
	return 0;
}

