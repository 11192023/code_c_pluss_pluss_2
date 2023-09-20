#include<iostream>
using namespace std;
bool tuyen_tinh(int a[],int n,int x){
	int l=0,r=n-1;
	while(l<=r){
		int m = (l+r)/2;
		if(a[m]==x)return true;
		else if(a[m]<x){
			l=m+1;
		}else r=m-1;
	}
	return false;
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i =0;i<n;i++){
		cin>>a[i];
	}int x;
	cin>>x;
	while (x--){
		int b;
		cin>>b;
		if(tuyen_tinh(a,n,b)){
			cout<<"YES"<<endl;
		}else cout<<"NO"<<endl;
	}
	return 0;
}

