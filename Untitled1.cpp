#include<iostream>
#include<cmath>
using namespace std;
void pttt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			int cnt =0;
			while (n%i==0){
				cnt++;
				n/=i;
			}cout<< i << "^" << cnt;
		if(n!=1)cout<<" * ";
		}
	}if(n!=1){
		cout<<n<<"^"<<"1";
	}
}
int main(){
	int n;
	cin>>n;
	pttt(n);
	return 0;
}
