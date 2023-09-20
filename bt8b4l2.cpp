#include<iostream>
using namespace std;
int small_prime_divisor(int n){
	if(n<=1)return n;
	for (int i =2;i*i<= n;i++){
		if(n%i==0)
		return i;}
		
		
		return n;
	
}
int main(){
	int a;
	cin>>a;
	for(int i=1;i<=a;i++){
		cout<<small_prime_divisor(i)<<endl;
	}return 0;
}
