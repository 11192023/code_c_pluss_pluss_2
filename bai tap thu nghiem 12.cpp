#include<iostream>
using namespace std;
long long factorial(int n){
	long long factorial =1;
	for(int i=1;i<=n;i++){
		if(i%2!=0){
		
		factorial*=i;}
	}return factorial;
}
int main(){
	int n;
	cin>>n;
	long long  result=factorial(n);
	cout<<result<<" ";
	return 0;
}
