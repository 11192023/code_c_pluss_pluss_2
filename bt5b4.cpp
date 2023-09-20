#include<iostream>
#include<cmath>
using namespace std;
bool ktcp(long long n){
	long long can = sqrt(n);
	return can * can== n;
}int main(){
	int a, b;
	cin>>a>>b;
	for(int i =a;i<=b;i++){
		if(ktcp(i)){
			cout << i<<endl;
		}cout<<endl;
	}
	return 0;
}
