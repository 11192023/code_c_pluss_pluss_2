#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int>a[1001];
bool visit[1001];
void input(){
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
		a[x].push_back(y);
		a[y].push_back(x);
	}
	memset(visit,false,sizeof(visit));
}
void dps(int u){
	cout<<u<<" ";
	visit[u]=true;
	for(auto x:a[u]){
		if(!visit[x]){
			dps(x);
		}
	}
}
int main(){
	input();
	dps(1);
	return 0;
}
