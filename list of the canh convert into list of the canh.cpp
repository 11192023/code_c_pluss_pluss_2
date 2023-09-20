#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	vector<int>a[1000];
	for(int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
		a[x].push_back(y);
		a[y].push_back(x);
	}
	for(int i=1;i<=n;i++){
		cout<<i<<": ";
		for(auto x:a[i]){
			cout<<x<<" ";
		}
		cout<<endl;
	}
	return 0;
}
