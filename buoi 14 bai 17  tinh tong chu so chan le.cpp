#include<iostream>
using namespace std;
void check(long long n){
	long long sumeven=0;
	long long sumodd=0;
	while(n>0){
		long long digit=n%10;
		if(digit%2==0){
			sumeven+=digit;
		}
		else{
			sumodd+=digit;
		}
		n/=10;
	}
	cout<<sumeven<<endl;
	cout<<sumodd<<endl;
}
int main(){
	long long n;
	cin>>n;
	check(n);
	return 0;
	
}
