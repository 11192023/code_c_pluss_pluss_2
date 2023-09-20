#include<iostream>
using namespace std;
long long countdigit(long long n){
	if(n<10){
		return 1;
	}
	return 1+countdigit(n/10);
}
int main(){
	long long n;
	cin>>n;
	long long count=countdigit(n);
	cout<<count<<endl;
	return 0;
}
