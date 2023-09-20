#include <iostream>
#include<cmath>
using namespace std;
bool sochinhphuong(long long n){
	long long sqrt_n=sqrt(n);
	return sqrt_n *sqrt_n==n;
} int main(){
	long long a;
	cin >> a;
	if(sochinhphuong(a)){
		cout<<"YES";
	}else{cout<<"NO";
	}return 0;
}

