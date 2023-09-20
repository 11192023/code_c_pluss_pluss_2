#include<iostream>
using namespace std;
long long fibo[100];
void init(){
	fibo[0]=0;
	fibo[1]=1;
	for(int i=2;i<=92;i++){
		fibo[i]=fibo[i-1]+fibo[i-2];
	}
}
int main(){
	init();
	long long n;
	cin>>n;
	int ok=0;
	for(int i=0;i<=92;i++){
		if(fibo[i]==n){
			ok=1;
			break;
		}
	}
	if(ok){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
	return 0;
}
