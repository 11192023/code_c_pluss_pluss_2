#include<iostream>
long long fitorial(long long n){
	if(n==1)return 1;
	return n*fitorial(n-1);
	
}
using namespace std;
int main(){
	long long n;
	cin>>n;
	cout<<fitorial(n);
	return 0;
}
