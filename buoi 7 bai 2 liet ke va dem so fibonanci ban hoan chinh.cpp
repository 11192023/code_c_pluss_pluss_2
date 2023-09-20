#include<iostream>
using namespace std;
int fibonanci(long long n){

if(n==1||n==0)return 1;
long long  fn1=0;
long long fn2=1;
for( int i=2;i<=92;i++){
	
	long long fn=fn1+fn2;
	if(fn==n)return 1;
	fn1=fn2;
	fn2=fn;
}return 0;
}
int main(){
	int n;
	cin>>n;
	long long a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	bool found =false;
	for(int i=0;i<n;i++){
		if(fibonanci(a[i])){
		cout<<a[i]<<" ";
		found =true;
	}
		
	}	if(!found){
			cout<<"NONE";}
	return 0;
}
