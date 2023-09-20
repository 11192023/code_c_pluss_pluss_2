#include<bits/stdc++.h>
using namespace std;
int n,m,s;
vector<pair<int,int>>a[1001];
void input(){
	cin>>n>>m>>s;
	for(int i=1;i<=m;i++){
		int x,y,w;
		cin>>x>>y>>w;
		a[x].push_back({y,w});
		a[y].push_back({x,w});
	}
}
void dijkstra(int s){
	vector<long long>v(n+1,INT_MAX);
	vector<bool>visit(n+1,false);
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;
	v[s]=0;
	q.push({0,s});
	while(!q.empty()){
		pair<int,int>top=q.top();
		q.pop();
		int ver=top.second;
		int dis=top.first;
		if(visit[ver])continue;
		visit[ver]=true;
		for(auto x: a[ver]){
			int u=x.first;
			int w=x.second;
			if(v[u]>v[ver]+w){
				v[u]=v[ver]+w;
				q.push({v[u],u});
			}
		}
	}
	for(int i=1;i<=n;i++){
		cout<<v[i]<<" ";
	}
}
int main(){
	input();
	dijkstra(1);
	return 0;
}
