#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int max(int a,int b){
	if(a>b)return a;
	return b;
}
int main(){
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	vector<int>l(n,1);
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			if(v[i]>v[j]){
				l[i]=max(l[i],l[j]+1);
			}
		}
	}
	cout<<*max_element(v.begin(),v.end());
	return 0;
}
