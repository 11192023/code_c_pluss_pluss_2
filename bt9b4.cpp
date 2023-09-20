#include<bits/stdc++.h>
using namespace std;
bool ktnt(int n){
	if(n<=2)return false;
	for (int i=2;i<=sqrt(n);i++){
		if(n%i==0)return false;
	}return true;
}
int largest_prime_diviser(int n){
	int largest =1;
	for(int i=2;i<=n;i++){
		if(n%i==0&&ktnt(i)){
			largest =i;
		}
	}return largest ;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<largest_prime_diviser(n)<<endl;
		
	}return 0;
}
