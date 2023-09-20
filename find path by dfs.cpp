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
void dps(int u){
	visit[u]=true;
	for(auto x:a[u]){
		if(!visit[x]){
		parent[x]=u;
		dps(x);
	   }
	}
}
void path(int s,int t){
	dps(s);
	if(!visit[t]){
		cout<<"khong co duong di toi t"<<endl;
	}else{
		vector<int>Path;
		while(t!=s){
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
