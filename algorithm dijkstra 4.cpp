#include<bits/stdc++.h>
using namespace std;
int n,m,s,t;
vector<pair<int,int>>a[1001];
void input(){
	cin>>n>>m>>s>>t;
    for(int i=0;i<m;i++){
    	int x,y,w;
    	cin>>x>>y>>w;
    	a[x].push_back({y,w});
    	a[y].push_back({x,w});
	}
}
int parent[1001];
void dijkstra(int s,int t){
	vector<long long >v(n+1,INT_MAX);
	vector<bool>visit(n+1,false);
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;
	visit[s]=0;
	parent[s]=s;
	q.push({0,s});
	while(!q.empty()){
		pair<int,int>top=q.top();
		q.pop();
		int ver=top.second;
		int dis=top.first;
		if(visit[ver])continue;
		visit[ver]=true;
		for(auto x:a[ver]){
			int u=x.first;
			int w=x.second;
			if(v[u]>v[ver]+w){
				v[u]=v[ver]+w;
				q.push({v[u],u});
				parent[u]=ver;
			}
		}
	}
	cout<<v[t]<<endl;
	vector<int>path;
	while(1){
		path.push_back(t);
		if(s==t)break;
		t=parent[t];
	}
	reverse(path.begin(),path.end());
	for(auto x: path){
		cout<<x<<" ";
	}
}
int main(){
	input();
	dijkstra(s,t);
	return 0;
}
