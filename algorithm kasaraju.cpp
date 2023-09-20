#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int>adj[1001],re_adj[1001];
bool visit[1001];
stack<int>st;
void input(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
		re_adj[y].push_back(x);
	}
}
void dfs1(int u){
	visit[u]=true;
	for(auto x:adj[u]){
		if(!visit[x]){
			dfs1(x);
		}
	}
	cout<<u<<" ";
	st.push(u);
}
void dfs2(int u){
	visit[u]=true;
	cout<<u<<" ";
	for(auto x: re_adj[u]){
		if(!visit[x]){
			dfs2(x);
		}
	}
}
void kosaraju(){
	memset(visit,false,sizeof(visit));
	for(int i=1;i<=n;i++){
		if(!visit[i]){
			dfs1(i);
		}
	}
	cout<<endl;
	memset(visit,false,sizeof(visit));
	while(!st.empty()){
		int u=st.top();
		st.pop();
		if(!visit[u]){
			dfs2(u);
			cout<<endl;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		input();
		kosaraju();
		for(int i=1;i<=n;i++){
			adj[i].clear();
			re_adj[i].clear();
		}
	}
	return 0;
}

