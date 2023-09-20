#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int>a[1001];
bool visit[1001];
int in[1001];
vector<int> topo;
void input(){
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
		a[x].push_back(y);
	}
	memset(visit,false,sizeof(visit));
}
void dfs(int u){
	visit[u]=true;
	for(auto x:a[u]){
		if(!visit[x]){
			dfs(x);
		}
	}
	topo.push_back(u);
}
int main(){
	input();
	for(int i=1;i<=n;i++){
		if(!visit[i])
		{
		  dfs(i);	
		}
	}
	reverse(topo.begin(),topo.end());
	for(auto x:topo){
		cout<<x<<" ";
	}
	return 0;
}
