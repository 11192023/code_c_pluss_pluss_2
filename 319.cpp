#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,k,a[100],used[100];
void print(){
	for(int i=1;i<=k;i++){
		cout<<a[i];
	}
	cout<<endl;
}
void tri(int i){
	for(int j=a[i-1]+1;j<=n-k+i;j++){
		
		a[i]=j;
		if(i==k){
			print();
		}
		else{
			tri(i+1);
		}

	}
}
int main(){
	cin>>n;
	cin>>k;
	memset(used,0,sizeof(used));
	a[0]=0;
	tri(1);
	return 0;
}
