#include <iostream>
#include<cmath>
using namespace std ;
int main(){
	long long n;
	cin>>n;
	long long sum =0;
	for (int i=0; i<=sqrt(n);i++){
		if(n%i==0){
			long long j =n/i;
			sum+= i+j;
			
		if(i==j){
			sum-=i;
		}
	}
	}cout <<sum ;
	return 0;
}
