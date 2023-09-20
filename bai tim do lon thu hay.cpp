#include<iostream>
#include<cmath>
using  namespace std;
int fibo[100];
void init(){
	fibo[0]=0;
	fibo[1]=1;
	for(int i=2;i<=92;i++){
		fibo[i]=fibo[i-1]+fibo[i-2];
	}
}
int isprime(int num){
	for(int i=0;i<=sqrt(num);i++){
		if(num%i==0)return false;
	}
	return num>1;
}
int sum(int n){
	init();
	int sum=0;
	while(n){
		sum+=n%10;
		n/=10;
	}
	for(int i=0;i<=92;i++){
		if(fibo[i]==sum){
			return sum;
		}
	}
	return 0;
}
int main(){
    int a;
    int b;
    cin>>a>>b;
    int cnt=0;
    for(int i=a;i<=b;i++){
    	if(sum(i)&&isprime(i)){
    		cout<<i<<" ";
    		cnt=1;
		}
	}
	if(!cnt){
		cout<<" -1";
	}
	return 0;
}
