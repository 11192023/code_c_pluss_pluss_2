#include<bits/stdc++.h>
using namespace std;
int n,m,st,en;
vector<int>a[1001];
bool visit[1001];
int parent[1001];
void input(){
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int x;int y;
		cin>>x>>y;
		a[x].push_back(y);
		a[y].push_back(x);
	}
	memset(visit,false,sizeof(visit));
	memset(parent,0,sizeof(parent));
}
bool dfs(int u){
	visit[u]=true;
	for(auto x:a[u]){
		if(!visit[x]){
			parent[x]=u;
			if(dfs(x)){
				return true;
			}else if(x!=parent[u]){
				st=x;en=u;
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
			if(dfs(i)){
				cout<<"yes"<<endl;
				vector<int>cycle;
				cycle.push_back(st);
				while(en!=st){
					cycle.push_back(en);
					en=parent[en];
				}
				cycle.push_back(st);
				reverse(cycle.begin(),cycle.end());
				for(auto x:cycle){
					cout<<x<<" ";
				}
				return 0;
			}
		}
	}
	cout<<"no";
	return 0;
}
