#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
double sum(double n){
	if(n==1)return 1.0;
	return 1.0/n+sum(n-1);
}
int main(){
	long long n;
	cin>>n;
	cout<<fixed<<setprecision(3)<<sum(n);
	return 0;
}
