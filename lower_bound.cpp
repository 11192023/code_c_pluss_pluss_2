#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,x;
	cin>>n>>x;
	int a[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	auto it=upper_bound(a,a+n,x);
	auto ti=lower_bound(a,a+n,x);
	if(it==a+n){
		cout<<"no found";
	}
	cout<<*it<<" "<<*ti<<endl;
	cout<<it-a<<" "<<ti-a<<endl;
	
}
