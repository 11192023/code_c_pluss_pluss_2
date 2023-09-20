#include<iostream>
using namespace std;
bool kt(int a[],int n){
	int i;
	for(i=0;i<=n/2;i++){
		if(a[i]!=a[n-1-i])return false;
	}return true;
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}if(kt(a,n))cout<<"YES";
	else cout <<"NO";
	return 0;
}
