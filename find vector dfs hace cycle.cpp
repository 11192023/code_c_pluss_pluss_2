#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
int n,m;
vector<int>a[1001];
int color[1001];
int parent[1001];
void input(){
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
		a[x].push_back(y);
	}
	memset(color,0,sizeof(color));
	memset(parent,0,sizeof(parent));
}
bool dfs(int u){
	color[u]=1;
	for(auto x:a[u]){
		if(color[x]==0){
		parent[x]=u;
		if(dfs(x))return true;	
		}else if(color[x]==1){
			return true;
		}
	}
	color[u]=2;
	return false;
}
int main(){
	input();
	for(int i=1;i<=n;i++){
		if(color[i]==0){
			if(dfs(i)){
				cout<<"yes";
				return 0;
			}
		}
	}
	cout<<"no";
	return 0;
}
