#include<iostream>
using namespace std;
int max(int a,int b){
	if(a>b)return a;
	return b;
}
int main(){
	int n,k;
	cin>>n>>k;
	int a[1001];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<=n-k;i++){
		int tmp=INT_MIN;
		for(int j=0;j<k;j++){
			tmp=max(a[i+j],tmp);
		}
		cout<<tmp<<" ";
	}
	return 0;
}
