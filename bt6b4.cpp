#include<iostream>
#include<cmath>
using namespace std;
bool ktcp(long long n){
	long long can = sqrt(n);
	return can * can== n;
}int main(){
	long long a, b;
	cin>>a>>b;
	if(a>b){
		swap(a,b);
	}
	for (long long i=ceil(sqrt(a));i*i<=b;i++){
		if(ktcp(i*i)){
			cout<<i*i<<" ";
		}
	}
		
		

	return 0;
}
