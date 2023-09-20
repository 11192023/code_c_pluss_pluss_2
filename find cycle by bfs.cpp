#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int>a[1001];
bool visit[1001];
int parent[1001];
void input(){
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
		a[x].push_back(y);
		a[y].push_back(x);
	}
	memset(visit,false,sizeof(visit));
	memset(parent,0,sizeof(parent));
}
bool bfs(int u){
	queue<int>q;
	q.push(u);
	visit[u]=true;
	while(!q.empty()){
		int v=q.front();
		q.pop();
		for(auto x:a[v]){
			if(!visit[x]){
				q.push(x);
				visit[x]=true;
				parent[x]=v;
			}else if(x!=parent[v]){
				return true;
			}
		}
	}
	return false;
}
int main(){
	input();
	for(int i=1;i<=n;i++){
		if(!visit[i]){
			if(bfs(i)){
				cout<<"yes";
				return 0;
			}
		}
	}
	cout<<"no";
	return 0;
}
