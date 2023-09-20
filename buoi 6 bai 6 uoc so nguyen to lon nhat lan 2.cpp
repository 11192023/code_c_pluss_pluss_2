
#include <iostream>
#include<cmath>
using namespace std;
int solve(int n){
	int cnt ;
	for(int i= 2;i<=sqrt(n);i++){
		while(n%i==0){
			cnt=i;
			n/=i;
		}
	}if(n!=1){
		cnt =n;
	}return cnt;
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
