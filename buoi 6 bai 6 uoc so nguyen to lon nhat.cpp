#include <iostream>
#include<cmath>
using namespace std;
int solve(int n){
	int res;
	for(int i= 2;i<=sqrt(n);i++){
		while(n%i==0){
			res=i;
			n/=i;
		}
	}if(n!=1){
		res =n;
	}return n;
}
int main(){
	int t;
	cin >>t;
		for( int i=1;i<=t;i++){
				int n;
		cin >>n;
			cout<<solve(n)<<endl;
		}
		
	return 0;
}
