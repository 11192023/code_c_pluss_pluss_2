#include<bits/stdc++.h>
using namespace std;
int n,m,s,t;
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
void bfs(int u){
	queue<int>q;
	q.push(u);
	visit[u]=true;
	while(q.empty()){
		int v=q.front();
		q.pop();
		for(auto x:a[v]){
			q.push(x);
			visit[x]=true;
			parent[x]=v;
		}
	}
}
void path(int s,int t){
	bfs(s);
	if(!visit[t]){
		cout<<"khong co duong di toi t"<<endl;
	}else{
		vector<int>Path;
		while(s!=t){
			Path.push_back(t);
			t=parent[t];
			}
			Path.push_back(s);
			reverse(Path.begin(),Path.end());
			for(auto x:Path){
				cout<<x<<" ";
			}
		}
	}
int main(){
	input();
	cin>>s>>t;
	path(s,t);
	return 0;
}
