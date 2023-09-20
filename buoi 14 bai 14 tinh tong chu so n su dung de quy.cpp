#include <iostream>
using namespace std;
long long sumdigit(long long n){
	if(n<10){
		return n;
	}
	return n%10+sumdigit(n/10);
}
int main(){
	long long n;
	cin>>n;
	long long sum =sumdigit(n);
	cout<<sum<<endl;
	return 0;
}
