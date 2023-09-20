#include<iostream>
using namespace std;
int check(int n,int k){
	if(k==0||k==n){
		return 1;
	}else{
	return check(n-1,k-1)+check(n-1,k);
}
}
int main(){
	int n,k;
	cin>>n>>k;
	int result=check(n,k);
	cout<<result;
	return 0;
	
}

